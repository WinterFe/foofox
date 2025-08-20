/*
 * Fooyin
 * Copyright © 2024, Luke Taylor <LukeT1@proton.me>
 *
 * Fooyin is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Fooyin is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Fooyin.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "modelutils.h"

#include <QModelIndex>

namespace Fooyin::Utils {
IndexRangeList getIndexRanges(const QModelIndexList& indexes)
{
    IndexRangeList indexGroups;

    QModelIndexList sortedIndexes{indexes};
    std::ranges::sort(sortedIndexes, sortModelIndexes);

    auto startOfSequence = sortedIndexes.cbegin();
    while(startOfSequence != sortedIndexes.cend()) {
        auto endOfSequence
            = std::adjacent_find(startOfSequence, sortedIndexes.cend(), [](const auto& lhs, const auto& rhs) {
                  return lhs.parent() != rhs.parent() || rhs.row() != lhs.row() + 1;
              });
        if(endOfSequence != sortedIndexes.cend()) {
            std::advance(endOfSequence, 1);
        }

        indexGroups.emplace_back(startOfSequence, endOfSequence);

        startOfSequence = endOfSequence;
    }

    return indexGroups;
}

bool sortModelIndexes(const QModelIndex& index1, const QModelIndex& index2)
{
    QModelIndex item1{index1};
    QModelIndex item2{index2};

    QModelIndexList item1Parents;
    QModelIndexList item2Parents;
    const QModelIndex root;

    while(item1.parent() != item2.parent()) {
        if(item1.parent() != root) {
            item1Parents.push_back(item1);
            item1 = item1.parent();
        }
        if(item2.parent() != root) {
            item2Parents.push_back(item2);
            item2 = item2.parent();
        }
    }
    if(item1.row() == item2.row()) {
        return item1Parents.size() < item2Parents.size();
    }
    return item1.row() < item2.row();
}

void recursiveDataChanged(QAbstractItemModel* model, const QModelIndex& parent, const QList<int>& roles)
{
    const int rowCount    = model->rowCount(parent);
    const int columnCount = model->columnCount(parent);

    if(rowCount > 0 && columnCount > 0) {
        const QModelIndex topLeft     = model->index(0, 0, parent);
        const QModelIndex bottomRight = model->index(rowCount - 1, columnCount - 1, parent);
        emit model->dataChanged(topLeft, bottomRight, roles);
    }

    for(int row{0}; row < rowCount; ++row) {
        const QModelIndex index = model->index(row, 0, parent);
        if(model->hasChildren(index)) {
            recursiveDataChanged(model, index, roles);
        }
    }
}
} // namespace Fooyin::Utils
