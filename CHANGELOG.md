# Changelog

## [0.9.1](https://github.com/fooyin/fooyin/releases/tag/v0.9.1) (2025-08-17)

### Fixes

* Engine: Fix silent playback in some cases ([#380](https://github.com/fooyin/fooyin/issues/380))
* Engine: Resolve crash when playing tracks in archives
* Directory Browser: Fix scrolling to top on playback ([#617](https://github.com/fooyin/fooyin/issues/617))
* Directory Browser: Fix restoring directory on startup in tree mode
* Scrobbler: Fix layout of settings page
* Seekbar: Fix display of labels in some instances
* Status Bar: Fix evaluation of playing script when active playlist tracks change
* WaveBar: Resolve crash when seeking ([#616](https://github.com/fooyin/fooyin/issues/616))


## [0.9.0](https://github.com/fooyin/fooyin/releases/tag/v0.9.0) (2025-08-17)

### New Features

* Artwork
  - Support changing embedded artwork
  - Support downloading and saving artwork ([#594](https://github.com/fooyin/fooyin/pull/594))
* Lyrics
  - Support finding, saving, and editing lyrics ([#355](https://github.com/fooyin/fooyin/pull/355))
* Playlist
  - Add autoplaylist functionality ([#366](https://github.com/fooyin/fooyin/pull/366))

### Improvements

* Artwork
  - CoverWidget: Always show individual track covers ([#525](https://github.com/fooyin/fooyin/issues/525))
  - Settings: Display disk cache usage and add button to clear
* Engine
  - Handle file changes during playback
  - Make VBR update interval configurable ([#375](https://github.com/fooyin/fooyin/issues/375))
  - Start playback on next/previous if stopped ([#564](https://github.com/fooyin/fooyin/issues/564))
  - Add support for audio/x-flac mime type ([#458](https://github.com/fooyin/fooyin/pull/458))
* Interface
  - Add setting to toggle main menu bar ([#534](https://github.com/fooyin/fooyin/issues/534))
  - LibraryTree: Align click actions with browser page ([#516](https://github.com/fooyin/fooyin/pull/516))
  - LibraryTree: Improve selection playlist behaviour
  - Selection Info: Include library name if track is in library
  - Settings: Add buttons to open config and share directories
* Playback
  - Add “Follow playback queue” option ([#479](https://github.com/fooyin/fooyin/pull/479))
* Playlist
  - Add `%list_index%` variable ([#519](https://github.com/fooyin/fooyin/issues/519))
  - Add queue/play next actions ([#367](https://github.com/fooyin/fooyin/issues/367))
  - Automatically load rest of playlist when ready ([#359](https://github.com/fooyin/fooyin/issues/359))
  - Optimise updating track data by limiting column updates ([#519](https://github.com/fooyin/fooyin/issues/519))
  - Perform searches by filtering the current playlist ([#350](https://github.com/fooyin/fooyin/issues/350))
  - Use alternating row colours in icon mode
* ReplayGain Scanner
  - Support changing scanner backend
* Scripting
  - Add `%playlist_elapsed%`, `%playlist_duration%` ([#457](https://github.com/fooyin/fooyin/issues/457))
  - Add `$round` ([#486](https://github.com/fooyin/fooyin/pull/486)), `$strstr` and friends ([#442](https://github.com/fooyin/fooyin/pull/442))
  - Add %filesize_natural% ([#417](https://github.com/fooyin/fooyin/pull/417))
  - Add `LIMIT` keyword and `*` alias for `ALL`
  - Add sorting shorthand `S+`/`S-` and improve sort expression evaluation
  - Add number arg to `$crlf` to support multiple line breaks in one call
* Scrobbler
  - Add filtering options ([#565](https://github.com/fooyin/fooyin/pull/565))
  - Add libre.fm service ([#517](https://github.com/fooyin/fooyin/issues/517))

### Fixes

* Engine
  - Fix duration of CUE tracks on initial read ([#376](https://github.com/fooyin/fooyin/issues/376))
  - Fix gain calculation with gapless playback enabled ([#402](https://github.com/fooyin/fooyin/issues/402))
  - Fix gapless playback with ReplayGain enabled ([#407](https://github.com/fooyin/fooyin/issues/407))
  - Fix playback of last track in CUE ([#385](https://github.com/fooyin/fooyin/issues/385))
  - Fix playback restarting when stopping with fade out ([#597](https://github.com/fooyin/fooyin/issues/597))
  - Fix seek interrupting fade-in ([#436](https://github.com/fooyin/fooyin/issues/436))
  - Fix silence between CUE albums ([#376](https://github.com/fooyin/fooyin/issues/376))
  - Fix playback of MP2 ([#612](https://github.com/fooyin/fooyin/issues/612))
* Interface
  - ExpandedTreeView: Fix crash with bottom captions in icon mode ([#437](https://github.com/fooyin/fooyin/issues/437))
  - ExpandedTreeView: Fix unintended scrolling after drop ([#542](https://github.com/fooyin/fooyin/issues/542))
  - Fix blurry icon in app switcher ([#599](https://github.com/fooyin/fooyin/issues/599))
  - Fix encoding for info symbol ([#419](https://github.com/fooyin/fooyin/issues/419))
  - Fix invisible playlist text in some cases ([#481](https://github.com/fooyin/fooyin/issues/481))
  - Fix layout export not respecting theme options
  - Fix layout export ignoring set layout name ([#557](https://github.com/fooyin/fooyin/pull/557))
  - Fix painting alternating row colours with some styles ([#583](https://github.com/fooyin/fooyin/issues/583))
  - Fix status widget scripts breaking on escaped reserved characters ([#514](https://github.com/fooyin/fooyin/issues/514))
* Library/LibraryScanner
  - Fix creation of garbage files when attempting to write metadata to moved files ([#604](https://github.com/fooyin/fooyin/pull/604))
  - Fix duplicate tracks when dropping CUE and related file
  - Improve detection of missing files (CUE) and log missing tracks
  - LibraryTree: Fix selection playlist not working after updating tracks
* Playlist
  - Fix changing rating
  - Fix drag-and-drop between playlists
  - Fix finding currently playing track
  - Fix saving state of hidden playlist ([#382](https://github.com/fooyin/fooyin/issues/382))
  - Fix crash in search dialog
  - Fix sorting by album ([#399](https://github.com/fooyin/fooyin/issues/399))
  - Fix underlying track order after sorting ([#358](https://github.com/fooyin/fooyin/issues/358))
  - Fix “Show playing track” after playlist change ([#358](https://github.com/fooyin/fooyin/issues/358))
  - Fix playlist auto-export not obeying settings ([#545](https://github.com/fooyin/fooyin/pull/545))
  - Fix import of multiple playlists merging into one ([#541](https://github.com/fooyin/fooyin/pull/541))
* Scrobbler
  - Fix ListenBrainz scrobbling ([#485](https://github.com/fooyin/fooyin/issues/485))
  - Prevent ListenBrainz sign-in without token
* WaveBar
  - Resolve crash when generating waveform of mono track ([#383](https://github.com/fooyin/fooyin/issues/383))



## [0.8.1](https://github.com/fooyin/fooyin/releases/tag/v0.8.1) (2024-10-15)

### Improvements

* LibraryScanner: Use a more detailed dialog that displays elapsed and estimated time
* LibraryScanner: Show per-file progress for archive and playlist scans
* RGScanner: Add dialog for removing RG info
* WaveBar: Use elapsed and estimated time dialog for generating waveforms

### Fixes

* Engine: Fix playback of WavPack
* RGScanner: Wait to close results dialog until files have been updated
* Settings: Fix reordering of decoders and tagreaders


## [0.8.0](https://github.com/fooyin/fooyin/releases/tag/v0.8.0) (2024-10-14)

### New Features

* Support for calculating ReplayGain ([#269](https://github.com/fooyin/fooyin/pull/269))
  - Uses libebur128 if found, or FFmpeg as a fallback
* Quick search and query syntax ([#291](https://github.com/fooyin/fooyin/pull/291))
* VU and peak meter plugin ([#317](https://github.com/fooyin/fooyin/pull/317))

### Improvements

* Engine
  - Support playback of DSD ([#325](https://github.com/fooyin/fooyin/pull/325))
  - Only convert to 64bit float when necessary
* Interface
  - Add mnemonics to all menubar actions 
  - Improve volume tooltip positioning ([#328](https://github.com/fooyin/fooyin/pull/328))
  - Reduce amount of filesystem queries for tracks without artwork
* Scripting
  - Add $split for splitting fields with a delimiter
  - Add $elide_mid, $elide_end ([#316](https://github.com/fooyin/fooyin/pull/316))
* Search
  - Add different search modes to unconnected search widgets
  - Add settings page under Library for configuration
  - Remove minimum character limit and show message when empty ([#307](https://github.com/fooyin/fooyin/issues/307))
* CUE: Support reading ReplayGain
* DirBrowser: Rename elide text setting to 'Show horizontal scrollbar'
* LibraryTree: Add ability to display artwork
* Properties: Improve appearance
* Settings: Save state-related settings to XDG_STATE_HOME ([#312](https://github.com/fooyin/fooyin/issues/312))

### Fixes

* Engine
  - Resolve rare crash when resuming playback on startup
  - Fix gapless playback occasionally failing on some outputs
* Playlist
  - Fix stop after current behaviour ([#302](https://github.com/fooyin/fooyin/issues/302))
  - Fix restoring state in rare instances
  - Improve performance when dropping a large number of tracks
* Search
  - Fix crash when dragging tracks from dialog
  - Fix incorrect track count
* CMake: Fix finding SndFile ([#305](https://github.com/fooyin/fooyin/issues/305))
* Controls: Fix playlist controls not responding to external changes
* Library: Fix race condition leading to a repeated scan request
* ReplayGain: Fix editing of values
* Scripting: Fix $iflonger behaviour ([#310](https://github.com/fooyin/fooyin/issues/310))
* TreeItem: Fix undefined behaviour


## [0.7.3](https://github.com/fooyin/fooyin/releases/tag/v0.7.3) (2024-09-28)

### Improvements

* Decoding: Support vgm7z
* Properties: Improve appearance

### Fixes

* Decoding: Resolve crash when restarting playback of some decoders
* Layout: Resolve crash when leaving layout editing mode

## [0.7.2](https://github.com/fooyin/fooyin/releases/tag/v0.7.2) (2024-09-26)

### Improvements

* General
  - Add option to use 'Various Artists' for compilations ([#286](https://github.com/fooyin/fooyin/issues/286))
  - Don't exit immediately on File->Quit if fading is enabled
* DirBrowser
  - Add option to toggle text elision ([#285](https://github.com/fooyin/fooyin/issues/285))
  - Add shortcut support ([#292](https://github.com/fooyin/fooyin/issues/292))
  - Add tooltips for elided text
* Search
  - Add dialog for searching entire library
  - Match all terms (words) individually
  - Update window title and loading text based on search mode
* CLI: Add playback control options ([#287](https://github.com/fooyin/fooyin/issues/287))
* Engine: Support playback of ASF
* FFmpeg: Add option to enable all supported formats
* Interface: Add shortcuts for adjusting volume
* Playlist: Add repeat album, shuffle albums and random playback modes ([#122](https://github.com/fooyin/fooyin/pull/122))
* Scripting: Add $rand ([#295](https://github.com/fooyin/fooyin/pull/295))
* Scrobbler: Add toggle button widget

### Fixes

* Settings
  - Fix saving/restoring decoder and tag reader order
  - Fix manual editing of spinboxes on some pages
* Engine: Resolve crash when attempting to restart playback with disabled decoder
* ExpandedTreeView: Fix empty space at top/bottom in right caption mode
* DirBrowser: Fix expand/collapse in tree mode
* FFmpeg: Resolve crash on failing to open input
* M3UParser: Handle Windows filepaths ([#289](https://github.com/fooyin/fooyin/issues/289))
* Scripting: Fix $meta and $info calls
* SeekBar: Fix setting width on startup
* Selection Info: Fix formatting of durations longer than 1 day ([#290](https://github.com/fooyin/fooyin/pull/290))


## [0.7.1](https://github.com/fooyin/fooyin/releases/tag/v0.7.1) (2024-09-21)

### Improvements

* Interface: Add option to lock splitters ([#280](https://github.com/fooyin/fooyin/issues/280))
* OpenMpt: Add config dialog
* ScriptEditor: Open with currently selected track if available

### Fixes

* Interface: Fix a few misspellings
* ScriptFormatter: Fix parsing of '<' in metadata fields ([#279](https://github.com/fooyin/fooyin/issues/279))
* SelectionInfo: Fix empty model on some systems ([#281](https://github.com/fooyin/fooyin/issues/281))
* TagEditor: Fix changing rating


## [0.7.0](https://github.com/fooyin/fooyin/releases/tag/v0.7.0) (2024-09-19)

### New Features

* ReplayGain support ([#251](https://github.com/fooyin/fooyin/pull/251), [#262](https://github.com/fooyin/fooyin/pull/262))
  - Adds support for reading and applying RG info
* Scrobbling
  - Last.fm and ListenBrainz are currently supported

### Improvements

* General
  - Support multiple values for composer, performer
  - Store additional fields: codec profile, encoding, tool, tag types
* Interface
  - FontButton: Apply set font to button text
  - Show dynamic bitrate in status bar for vbr/abr tracks ([#250](https://github.com/fooyin/fooyin/issues/250))
  - ToolTip: Improve positioning
  - Volume: Add slider dB tooltip ([#267](https://github.com/fooyin/fooyin/pull/267))
* Scripting
  - Improve implementation of $abbr and $replace ([#253](https://github.com/fooyin/fooyin/issues/253))
  - Add $ascii function ([#253](https://github.com/fooyin/fooyin/issues/253))
* SelectionInfo 
  - Add optional ReplayGain section
  - Hide empty entries 
* Engine: Handle audio samples as float64 ([#265](https://github.com/fooyin/fooyin/pull/265))
* FileOps: Replace directory separators in variable calls ([#253](https://github.com/fooyin/fooyin/issues/253))
* PlaylistOrganiser: Support dropping tracks on existing playlists
* TagEditor: Support customising default fields ([#256](https://github.com/fooyin/fooyin/issues/256))

### Fixes

* Interface
  - Resolve crash when changing layouts
  - Fix fonts not being set correctly on startup
  - Fix painting alternating row colours
  - Fix toggling selection in some views
  - LogSlider: Fix undefined behaviour
  - SeekBar: Fix some fonts causing widget to resize ([#277](https://github.com/fooyin/fooyin/issues/277))
* Engine
  - Fix playback not pausing while muted ([#258](https://github.com/fooyin/fooyin/pull/258))
  - Fix listened duration carrying over to next track
  - Fix track always being considered played when restoring state on startup
* Filters:
  - Fix incorrect item width on startup
  - Fix page up/down in artwork mode
* PlaylistOrganiser
  - Resolve crash when deleting active playlist
  - Fix shortcuts not working after right-click
* General: Fix building with Qt6.8
* Library: Notify of updated tracks while reloading
* Scripting: Support split values with $swapprefix, $stripprefix
* Selection Info: Fix sorting of entries
* WaveBar: Fix restoring playing/paused state


## [0.6.2](https://github.com/fooyin/fooyin/releases/tag/v0.6.2) (2024-08-31)

### New Features

* Theme support
  - Ability to change palette colours and fonts
  - Includes dark mode theme
  - Option to save to layouts on export

### Improvements

* Filters: Enable library viewer playlist by default
* Scripting: Make variable calls case-insensitive
* Settings: Add page to toggle and adjust order of decoders/tag readers
* VolumeControl: Support enabling both icon and slider

### Fixes

* Controls: Fix volume slider resizing splitter ([#248](https://github.com/fooyin/fooyin/issues/248))
* Engine: Fix crash when reading short archive entries
* ExpandedTreeView: Fix setting uniform row heights
* Playlist
  - Fix crash when switching to single-column mode
  - Fix track repeating with shuffle + repeat playlist enabled ([#245](https://github.com/fooyin/fooyin/issues/245))
  - Fix some rare instances of duplicate tracks
  - Fix auto-naming of new playlists for tracks with limited metadata 
* Search: Fix sorting by column


## [0.6.1](https://github.com/fooyin/fooyin/releases/tag/v0.6.1) (2024-08-27)

### Improvements

* Playlist: Add file menu option to save all playlists
* UI: Improve titles of menu entries which will open dialogs

### Fixes

* Playlist: Fix extensions not being automatically added when saving playlists
* WaveBar: Fix memory leak when generating waveforms

## [0.6.0](https://github.com/fooyin/fooyin/releases/tag/v0.6.0) (2024-08-27)

## New Features

### Plugins

* Archive support
  - Ability to add and play music directly from archives
* File operations
  - Options to rename, copy and move files on disk
* Audio Inputs:
  - SndFile - based on libsndfile
  - VGMInput - based on libvgm
  - OpenMPT
  - Game Music Emu
  - RawAudio (bin files)

### Playlist
- Auto-export playlists to a custom location ([#211](https://github.com/fooyin/fooyin/issues/211))
- Option to stop playback at a specified track ([#219](https://github.com/fooyin/fooyin/issues/219))
- Search functionality ([#109](https://github.com/fooyin/fooyin/issues/109), [#199](https://github.com/fooyin/fooyin/issues/199))
- Rating column with inline editing support

### Others
- Log dialog with adjustable log level
- Shortcut support for layouts
- Support for alphanumeric track numbers ([#209](https://github.com/fooyin/fooyin/issues/209))

### Improvements

* Engine
  - Resample audio if output doesn't support format ([#200](https://github.com/fooyin/fooyin/issues/200), [#201](https://github.com/fooyin/fooyin/issues/201))
  - Delay exiting until track has faded out
  - Clamp fade durations ([#222](https://github.com/fooyin/fooyin/pull/222))
  - Use S-curve for longer fade durations ([#237](https://github.com/fooyin/fooyin/pull/237))
  - ALSA: Make buffer, period size configurable
* Library
  - Support reading/writing playcount from files
  - Make writing rating, playcount to files optional
  - Add option to rescan a track selection from disk
  - Match extensions case-insensitively
  - Store codec as a string
  - Add separate sort script for incoming/external files
  - Add options for marking unavailable tracks ([#195](https://github.com/fooyin/fooyin/issues/195))
  - Add options to restrict and exclude file types
* Playlist
  - Support %playingicon% in any column ([#184](https://github.com/fooyin/fooyin/issues/184))
  - Add undo/redo to sorting ([#191](https://github.com/fooyin/fooyin/issues/191))
* Plugins
  - Display plugins list as a tree
  - Add about dialog to all plugins
  - Add optional configure dialog
* Scripting
  - Add %directory%, %firstplayed%, %lastplayed%, %libraryname%, %librarypath%
* Selection Info
  - Add options to prefer showing playing or selected tracks ([#181](https://github.com/fooyin/fooyin/issues/181), [#182](https://github.com/fooyin/fooyin/issues/182))
  - Add option to show extended metadata ([#210](https://github.com/fooyin/fooyin/issues/210))
  - Improve appearance on track selection change
* Settings:
  - Display play action as Play/Pause on shortcut settings page ([#197](https://github.com/fooyin/fooyin/issues/197))
  - Use space key as the default shortcut for play/pause ([#197](https://github.com/fooyin/fooyin/issues/197))
  - Add shortcut to remove current playlist ([#198](https://github.com/fooyin/fooyin/issues/198))
  - Improve display order of settings pages
  - Move several groups of settings to more suitable pages
  - Add action to open script editor for script inputs
* TagEditor
  - Add copy/paste
  - Add auto track number tool
  - Improve display of values for multiple tracks
  - Support direct editing of rating
* UI
  - Add a dedicated layout menubar entry
  - Add option to change application style
  - Add option to show status tips in the status bar
  - Add option to change seek step
  - Artwork Panel: Support changing alignment ([#232](https://github.com/fooyin/fooyin/pull/232))
  - Status Bar: Show message if in layout editing mode
  - Add action to open script in script editor for most setting pages
  - Add library menu option to optimise database
  - Add icon for script editor dialog
* WaveBar
  - Increase number of updates when generating waveform
  - Start playback when seeking in stopped state
* LibraryTree: Add option to open folder in folder structure view ([#175](https://github.com/fooyin/fooyin/issues/175))
* Playback: Add setting to control played threshold
* PlaylistTabs: Add playlist content submenu ([#188](https://github.com/fooyin/fooyin/issues/188))

### Fixes

* Engine
  - Fix playback of APE files ([#173](https://github.com/fooyin/fooyin/issues/173))
  - Fix playback of AAC files
  - Fix playback of tracks without a duration ([#183](https://github.com/fooyin/fooyin/issues/183))
  - Fix restoration of last played state on some systems ([#206](https://github.com/fooyin/fooyin/issues/206))
  - Fix pausing with hardware devices
  - Fix track ending immediately on restarting playback
  - Resolve rare crash when seeking in very short files
  - Handle seeking while fading ([#215](https://github.com/fooyin/fooyin/issues/215))
  - Fix seeking near end of track ([#218](https://github.com/fooyin/fooyin/issues/218))
  - Always reinit decoder when track was stopped ([#221](https://github.com/fooyin/fooyin/pull/221))
  - Fix crash on trying to play non-existent file
* Filters
  - Fix empty filters on startup
  - Resolve crashes when adding/updating tracks
  - Fix artwork mode captions with hidden sections
* Library
  - Fix regression with adding subdirectories ([#174](https://github.com/fooyin/fooyin/issues/174))
  - Fix multi-value fields not being stored ([#179](https://github.com/fooyin/fooyin/issues/179))
  - Fix adding files + dirs in same dir ([#197](https://github.com/fooyin/fooyin/issues/197))
  - Resolve occasional crashes when sorting tracks
  - Resolve crashes when rescanning tracks
  - Fix rescans of existing cue tracks
  - Fix setting added time, modified time
  - Resolve rare crash on exit in middle of library scan
  - Handle '/' separator for artists in id3v2.3 ([#216](https://github.com/fooyin/fooyin/issues/216))
* LibraryTree
  - Fix display of split field values ([#179](https://github.com/fooyin/fooyin/issues/179))
  - Fix adding new tracks ([#187](https://github.com/fooyin/fooyin/issues/187))
* PipeWire
  - Resolve crashes for some audio formats ([#183](https://github.com/fooyin/fooyin/issues/183), [#185](https://github.com/fooyin/fooyin/issues/185))
  - Fix silent playback after opening settings
* Playlist
  - Fix incorrect order of tracks when loading playlists
  - Fix duplicate track entries when dropping on new playlist ([#177](https://github.com/fooyin/fooyin/issues/177))
  - Fix parsing of some cue formats ([#178](https://github.com/fooyin/fooyin/issues/178), [#224](https://github.com/fooyin/fooyin/issues/224))
  - Fix shuffle skipping tracks ([#180](https://github.com/fooyin/fooyin/issues/180))
  - Resolve crash when reading single track cues
  - Resolve crash when adding new columns
  - Fix middle click actions
  - Fix parsing of non-UTF-8 files ([#223](https://github.com/fooyin/fooyin/issues/223))
* TagEditor
  - Fix display of identical field values
  - Fix display of custom tags
  - Fix duplicate tracks on updating metadata
  - Fix sorting new values
  - Fix editing metadata for some file types
  - Fix removing list values ([#179](https://github.com/fooyin/fooyin/issues/179))
  - Fix writing common fields ([#179](https://github.com/fooyin/fooyin/issues/179))
  - Fix duplicate rating fields on read after write
  - Fix editor becoming readonly after right-click
  - Fix setting max rating
  - Fix display of multiple numeric field values ([#214](https://github.com/fooyin/fooyin/issues/214))
* AutoHeaderView: Fix issues updating width for last section
* CoverWidget: Consider DPI when scaling image ([#242](https://github.com/fooyin/fooyin/issues/242))
* DirBrowser: Fix direct playback
* Layout: Fix window size always being saved
* PlaylistTabs: Switch playlist when scrolling over playlist tabs ([#240](https://github.com/fooyin/fooyin/issues/240))
* QueueViewer: Resolve memory leak from unparented actions
* Selection Info: Fix display of multiple album artists ([#216](https://github.com/fooyin/fooyin/issues/216))
* Settings: Fix changing language on restart ([#176](https://github.com/fooyin/fooyin/issues/176))
* WaveBar: Don't draw cursor when stopped

## Packaging

* Add libvgm as an optional git submodule
* Add libsndfile, libopenmpt, libgme and libarchive as optional dependencies


## [0.5.3](https://github.com/fooyin/fooyin/releases/tag/v0.5.3) (2024-07-07)

### Fixes

* LibraryScanner
  - Fix reading file properties for external files
  - Fix reading duration for cue tracks
* Playlist: Fix start playback on send to new playlist failing


## [0.5.2](https://github.com/fooyin/fooyin/releases/tag/v0.5.2) (2024-07-07)

### New Features

* Playback queue viewer/editor

### Improvements

* Playlist
  - Add cut, copy, paste and crop actions ([#156](https://github.com/fooyin/fooyin/issues/156))
  - Find a common field to use as playlist name when sending to a new playlist
  - Add options to control behaviour when opening files externally
  - Add middle-click options to add to playback queue
  - Improve performance of large playlists
* Playlist Tabs
  - Add optional clear button ([#114](https://github.com/fooyin/fooyin/issues/114))
  - Support dropping tracks to create a playlist
  - Support dropping external files
  - Set expand setting to off by default
* Layout editing mode:
  - Give splitters a more descriptive and accurate name ([#161](https://github.com/fooyin/fooyin/issues/161))
  - Don't show parent splitter menu when adding widgets to a new splitter ([#162](https://github.com/fooyin/fooyin/issues/162))
* Library Filter
  - Add right labels option
  - Improve artwork mode margins
  - Improve scrolling behaviour
* Library Tree
  - Go up on left key press ([#169](https://github.com/fooyin/fooyin/issues/169))
  - Trigger double-click on enter/return key press
* Search
  - Add filepath to search fields
  - Only start searching at 2 characters
* Artwork: Add responsive thumbnails
* Tab Stack: Use dialog for editing tab names when set to east or west position
* Translations: Dutch added ([#168](https://github.com/fooyin/fooyin/issues/168))

### Fixes

* Playlist
  - Fix select all not selecting all for large playlists
  - Fix clear not clearing large playlists
  - Fix an instance of header state not bring restored ([#166](https://github.com/fooyin/fooyin/issues/166))
* Library Filter
  - Fix unscrollable view
  - Fix empty view with no library
* CoverProvider: Fix crashes when attempting to read directory artwork ([#163](https://github.com/fooyin/fooyin/issues/163))
* Engine: Fix crash when changing device in an error state
* Playlist Tabs: Resolve crash when dropping tracks
* Scripting: Fix crashes using pad functions ([#167](https://github.com/fooyin/fooyin/issues/167))
* Selection Info: Avoid showing invalid values


## [0.5.1](https://github.com/fooyin/fooyin/releases/tag/v0.5.1) (2024-06-29)

### Improvements

* Playback
  - Add option to silently continue playback if track unavailable
  - Show message box for ALSA device errors
* Library Tree: Make animation of expand/collapse configurable
* Volume Control: Add slider mode

### Fixes

* Playlist
  - Fix unscrollable view when changing playlist
  - Fix selection playlists refreshing during library scans
* Engine: Fix silence when resuming from a stopped state with fading enabled
* ExpandedTreeView: Stop autoscrolling to selection if partly visible
* Filters: Fix restoring selection on track update
* Library Tree: Fix text colour for playing row
* Scripting: Fix usage of custom tags


## [0.5.0](https://github.com/fooyin/fooyin/releases/tag/v0.5.0) (2024-06-28)

### New Features

* CUE sheet support (including embedded) ([#136](https://github.com/fooyin/fooyin/pull/136))
* Import/export playlists (m3u/m3u8)
* Library Filter: Add artwork mode ([#149](https://github.com/fooyin/fooyin/pull/149))
* Add support for tag parser and audio decoder plugins

### Improvements

* Interface
  - Remember last open directory in file dialogs
  - Make window title playing script configurable
  - Add separate icon for repeat track mode ([#131](https://github.com/fooyin/fooyin/issues/131))
  - Improve appearance of dark icon theme
  - Add layout switching menu to view menu ([#150](https://github.com/fooyin/fooyin/issues/150))
  - Add option to save window size when exporting layouts ([#150](https://github.com/fooyin/fooyin/issues/150))
* Playlist Tabs
  - Add option to expand to fill
  - Use middle-click to create/delete playlists ([#147](https://github.com/fooyin/fooyin/issues/147))
* Library Tree: Add direct playback support ([#148](https://github.com/fooyin/fooyin/issues/148))
* Playlist Organiser: Support dropping tracks ([#146](https://github.com/fooyin/fooyin/issues/146))
* Tag Editor: Improve editing of metadata
* Tagging: Add ability to set ratings via context menu or shortcuts ([#152](https://github.com/fooyin/fooyin/issues/152))
* Widgets: Add playlist switcher widget

### Fixes

* Library
  - Fix crash when aborting library scans
  - Fix scan progress dialog not closing
* Selection Info
  - Fix several display issues
  - Improve performance
* Playlist
  - Fix flickering scrollbar when resizing ([#141](https://github.com/fooyin/fooyin/issues/141))
  - Improve restoration of state
  - Resolve crashes when removing multiple rows of different headers
* MPRIS
  - Fix artwork not updating for different tracks
  - Fix incorrect colour of icons when changing playmode 
* Engine: Fix crash when stopping playback without a valid track
* Track: Fix channel count being incorrectly displayed as 0


## [0.4.5](https://github.com/fooyin/fooyin/releases/tag/v0.4.5) (2024-06-05)

### Fixes

* Fix playback on startup if current output not found
* Fix pause not pausing playback position ([#133](https://github.com/fooyin/fooyin/issues/133))


## [0.4.4](https://github.com/fooyin/fooyin/releases/tag/v0.4.4) (2024-06-04)

### Improvements

* General
  - Add optional system tray icon ([#93](https://github.com/fooyin/fooyin/issues/93))
  - Save playlists, settings at regular intervals ([#127](https://github.com/fooyin/fooyin/issues/127))
* Playlist
  - Add bit depth/bits per sample column
  - Support configuring selection playlist keep alive behaviour
  - Add view option to show currently playing track
* Scripting:
  - Add playback variables ([#104](https://github.com/fooyin/fooyin/issues/104))
  - Add additional string functions ([#104](https://github.com/fooyin/fooyin/issues/104))
  - Add fallbacks for some fields if empty ([#130](https://github.com/fooyin/fooyin/issues/130))
* Selection Info
  - Support hiding/showing sections
  - Remember scroll position
  - Add additional technical fields ([#116](https://github.com/fooyin/fooyin/issues/116))
* ALSA: Support selecting hardware devices ([#119](https://github.com/fooyin/fooyin/issues/119))
* Engine: Add fading options for pause/stop ([#123](https://github.com/fooyin/fooyin/issues/123))
* Library Tree: Add option to remember expanded state
* Tag Editor: Add support for rating tags ([#115](https://github.com/fooyin/fooyin/issues/115))
* WaveBar: Add option to change number of samples used for waveform data
* Widgets: Add lyrics widget ([#118](https://github.com/fooyin/fooyin/pull/118))

### Fixes

* Playlist
  - Fix scaling of artwork ([#120](https://github.com/fooyin/fooyin/issues/120))
  - Fix keyboard controls for scrolling to top/bottom
  - Preserve previous sort order when sorting by column ([#126](https://github.com/fooyin/fooyin/issues/126))
  - Resolve crash when updating non-contiguous rows ([#127](https://github.com/fooyin/fooyin/issues/127))
* Engine: Handle device loss ([#110](https://github.com/fooyin/fooyin/issues/110))
* Interface: Fix scaling of some tooltips

  
## [0.4.3](https://github.com/fooyin/fooyin/releases/tag/v0.4.3) (2024-05-23)

### Improvements

* Interface
  - Support changing volume by scrolling on column icon ([#106](https://github.com/fooyin/fooyin/pull/106))
  - Add options to control appearance of tool buttons
  - Add options to override margins, splitter handle sizes
  - Make quick setup dialog modal
* Playlist
  - Add channels column
  - Add last modified column
  - Add follow playback options to playback menu
  - Improve performance when updating playback statistics ([#103](https://github.com/fooyin/fooyin/issues/103))
* WaveBar
  - Add optional labels
  - Improve behaviour when seeking

### Fixes

* General
  - Fix loading system translations
  - Fix some adding libraries while layout editing mode is active ([#90](https://github.com/fooyin/fooyin/issues/90))
* Interface
  - Fix font/row height inconsistencies ([#101](https://github.com/fooyin/fooyin/issues/101))
  - Fix layout editing mode not working under recent Qt versions ([#111](https://github.com/fooyin/fooyin/issues/111))
  - Fix wrong album art being displayed for untagged/poorly tagged files
  - Resolve crashes using undo/redo in layout editing mode
* Playlist
  - Fix autoscrolling when updating tracks
  - Fix dropping at end of playlist
  - Fix loading default column alignments
  - Fix sorting track numbers under some systems ([#112](https://github.com/fooyin/fooyin/issues/112))
  - Handle column name/script changes
  - Resolve rare crash on startup
* MPRIS
  - Fix artwork caching ([#87](https://github.com/fooyin/fooyin/issues/87))
  - Fix sending firstUsed, lastUsed metadata
* PipeWire
  - Fix playback of some file types ([#100](https://github.com/fooyin/fooyin/issues/100))
  - Fix playback of files with more than 3 channels
  - Handle server restarts ([#85](https://github.com/fooyin/fooyin/issues/85))
* Engine: Fix high-res file playback ([#100](https://github.com/fooyin/fooyin/issues/100))
* DirBrowser: Fix hang when using double click to play
* LibraryTree: Fix track count decrementing on tracks updating
* TagEditor: Fix saving changed metadata
* WaveBar: Fix crash when seeking ([#105](https://github.com/fooyin/fooyin/issues/105))


## [0.4.2](https://github.com/fooyin/fooyin/releases/tag/v0.4.2) (2024-05-16)

### New Features

* Playlist: Artwork columns

### Improvements

* Artwork
  - Add configurable pixmap cache size
  - Update cache for changed tracks
  - Load image data asynchronously ([#75](https://github.com/fooyin/fooyin/pull/75))
  - Add svg icon for the no cover/placeholder image
* Playlist
  - Add option to start playback on send
  - Add option to resume previous playback state on startup
  - Improve add/remove and hide/show of columns
  - Improve performance when removing tracks
  - Improve scaling of artwork
* PlaylistTabs
  - Add option to show 'add playlist' button ([#83](https://github.com/fooyin/fooyin/issues/83))
  - Add status icon to active playlist
* WaveBar
  - Add context options to control track waveform data
  - Add current disk cache size, with option to clear
* Layouts: Add setting to control root margin
* PlaylistOrganiser: Add status icon, background to active playlist
* Settings: Improve layout/formatting of some pages
* Scripting: Add playlist depth variable, functions to pad string left/right
* Sorting: Use QCollator for natural sorting ([#73](https://github.com/fooyin/fooyin/pull/73))

### Fixes

* Playlist
  - Fix crash when active playlist is empty
  - Fix crash when removing rows
  - Fix crash when using undo/redo
  - Fix display issues switching to single-column mode
  - Fix index for keep active playlist
  - Fix incorrect playing index
  - Fix playback on toggling 'playback follows cursor'
  - Fix removing moved columns
  - Fix select all not selecting all
* DirBrowser: Fix double-click, middle-click actions
* Engine: Fix playback of high resolution audio ([#76](https://github.com/fooyin/fooyin/issues/76))
* InfoWidget: Fix crash for languages other than English
* Library: Fix updating monitoring status
* LibraryTree: Fix double-click behaviour
* PlaylistOrganiser: Fix selecting current playlist on startup
* TagEditor: Fix updating album artist field


## [0.4.1](https://github.com/fooyin/fooyin/releases/tag/v0.4.1) (2024-04-14)

### New Features

* Artwork: Directory artwork discovery ([#68](https://github.com/fooyin/fooyin/issues/68))
* Artwork: Support reading front cover, back cover, artist
* Artwork: Add option to prefer playing track or selection
* Artwork: Add option to keep aspect ratio

### Improvements

* Playlist
  - Add bitrate, samplerate columns
  - Show queue indexes in single-column mode
* DirBrowser
  - Add mouse button support
  - Restore selected row when changing directory
* Artwork: Improve performance when resizing
* Layouts: Improve file structure
* Layout editing mode: Improve insertion of widgets; add widget splitting ([#71](https://github.com/fooyin/fooyin/issues/71))
* Player: Support restarting playback after stopping ([#69](https://github.com/fooyin/fooyin/issues/69))

### Fixes

* Playlist
  - Fix empty extension column
  - Fix auto scrolling under Wayland
* Layouts: Fix exporting ([#67](https://github.com/fooyin/fooyin/issues/67))
* PipeWire: Fix playback issues ([#70](https://github.com/fooyin/fooyin/issues/70))
* PlaylistTabs: Fix restoring playlist at startup
* SeekBar: Fix tooltip display issues
* WaveBar: Fix seek issues with some styles


## [0.4.0](https://github.com/fooyin/fooyin/releases/tag/v0.4.0) (2024-04-06)

### Features

* DB: Schema migration support ([#61](https://github.com/fooyin/fooyin/pull/61))
* Engine: Configurable buffer size
* Playlist: Global playback queue
* Plugins: Add options to disable individual plugins
* Plugins: MPRIS support
* Plugins: Waveform seekbar ([#60](https://github.com/fooyin/fooyin/pull/64), [#52](https://github.com/fooyin/fooyin/issues/52))
* Scripting: Custom metadata support
* Scripting: Formatting support in playlist ([#63](https://github.com/fooyin/fooyin/pull/63))
* SearchWidget: Add option to change placeholder text
* Seekbar: Add options to toggle labels, elapsed total
* Widgets: Directory browser ([#58](https://github.com/fooyin/fooyin/pull/58), [#54](https://github.com/fooyin/fooyin/issues/54))

### Changes

* Controls: Add button tooltips
* Engine: Don't start playing if seeking when paused
* Interface: Make multiple widgets responsive to DPI
* Layout editing mode: Add options to copy/paste and move widgets
* Layout editing mode: Add undo/redo support
* Playlist: Add playing column to indicate status
* Playlist: Make multi-column mode the default
* Playlist: Switch to playlist when using File->New Playlist
* Plugins: Make the ALSA output a separate plugin
* Settings: Make dialog modal (block rest of application)
* Track: Handle multiple album artists

### Fixes

* Controls: Fix player commands being issued twice
* CoverWidget: Fix no cover placeholder being shown unexpectedly
* DB: Fix out of memory errors when reading tracks
* Engine: Fix playback of some audio types
* Engine: Fix silence on next track if previously paused
* Engine: Fix silence when resuming from pause on some outputs
* Filters: Filter incoming tracks through active filters
* Filters: Fix frozen widgets when updating tracks
* Filters: Fix updated tracks being added to all filters
* Filters: Restore current selection when tracks are updated
* Library: Fix searching for album artwork in file directory ([#59](https://github.com/fooyin/fooyin/issues/59))
* LibraryTree: Fix hang when selected 'all music' row
* LibraryTree: Restore state when updating tracks
* Playlist: Fix crash when dropping tracks into playlist
* Playlist: Fix crash when inserting same tracks multiple times
* Playlist: Fix crashes when moving tracks
* Playlist: Fix incorrect order of tracks on startup
* Playlist: Fix moving/removing tracks in multi-column mode
* Playlist: Fix partial loading of album covers
* Playlist: Insert tracks in correct order
* PlaylistOrganiser: Fix crashes when removing rows
* SearchWidget: Fix crash using search after changing connections ([#53](https://github.com/fooyin/fooyin/issues/53))
* Seekbar: Respond to external position changes


## [0.3.10](https://github.com/fooyin/fooyin/releases/tag/v0.3.10) (2024-02-10)

### Changes
* General build system improvements

### Fixes
* StatusWidget: Fix flickering when playing a track with an ongoing library scan ([#47](https://github.com/fooyin/fooyin/pull/47))


## [0.3.9](https://github.com/fooyin/fooyin/releases/tag/v0.3.9) (2024-02-10)

### Fixes

* Build system fixes

## [0.3.8](https://github.com/fooyin/fooyin/releases/tag/v0.3.8) (2024-02-10)

### Changes

* General build system improvements
* Add support for building on Ubuntu 22.04 ([#49](https://github.com/fooyin/fooyin/pull/49))
* Filters: Disable filter selection playlist by default
* PlaylistOrganiser: Clear selection when changing current playlist

### Fixes

* LibraryTree: Fix duplicate tracks when switching layouts ([#44](https://github.com/fooyin/fooyin/issues/44))
* Library: Correctly sort tracks with large track numbers ([#46](https://github.com/fooyin/fooyin/issues/46))
* PlaylistOrganiser: Resolve crash when removing all playlists ([#48](https://github.com/fooyin/fooyin/issues/48))
* PlaylistWidget: Restore state on initialisation to keep playing icon active ([#50](https://github.com/fooyin/fooyin/issues/50))
* PlaylistWidget: Reset state/history when using send to new/current playlist
* PlaylistTabs: Correctly restore index to current playlist on initialisation
* Translations: Return correct translation path
* Track: Fix passing track-related containers in queued signals
* ScriptSandbox: Fix setting default state
* AudioDecoder: Fix crashes when decoding files in quick succession


## [0.3.7](https://github.com/fooyin/fooyin/releases/tag/v0.3.7) (2024-02-05)

### Features

* Add support for changing language (English and Chinese for now) ([#40](https://github.com/fooyin/fooyin/pull/40))

### Fixes

* Fix reading audio properties using older TagLib versions ([#41](https://github.com/fooyin/fooyin/issues/41))
* Fix removing custom tags from mp4 tags
* Fix library and track scan requests not running
* Improve ability to find installed FFmpeg libraries
* Fix high CPU usage when playing tracks (~10% -> ~1%)
* Fix playlist not switching when a playlist is removed
* Fix occasional crash when removing tracks from a playlist

## [0.3.6](https://github.com/fooyin/fooyin/releases/tag/v0.3.6) (2024-02-02)

### Changes

* Implement AudioDecoder as a separate, self-contained object to handle all file decoding ([#39](https://github.com/fooyin/fooyin/pull/39))
* Improve plugin naming scheme (fyplugin_name)

### Fixes

* Make creation and passing of AudioOutput to AudioEngine thread-safe
* Add additional safety checks to pipewire output


## [0.3.5](https://github.com/fooyin/fooyin/releases/tag/v0.3.5) (2024-02-01)

### Fixes

* Fix function call in AudioRenderer


## [0.3.4](https://github.com/fooyin/fooyin/releases/tag/v0.3.4) (2024-01-31)

### Changes

* Remove HoverMenu, LogSlider and MenuHeader from public API

### Fixes

* Fix crashes using PipeWire output

### Packaging

* Further improve plugin CMake setup
* Correctly pass vars to CMakeMacros for plugin development
* Install license, readme to data dir
* Add a CMake uninstall target
* Overhaul build instructions; see [BUILD.md](https://github.com/fooyin/fooyin/blob/master/BUILD.md)

## [0.3.3](https://github.com/fooyin/fooyin/releases/tag/v0.3.3) (2024-01-31)

### Changes

* Simplify plugin CMake setup

### Fixes

* Fix plugin/library rpath issues


## [0.3.2](https://github.com/fooyin/fooyin/releases/tag/v0.3.2) (2024-01-29)

### Changes

* Move AudioEngine to public API
* Improve AudioBuffer implementation
* Support TagLib 2.0 ([#38](https://github.com/fooyin/fooyin/issues/38))


## [0.3.1](https://github.com/fooyin/fooyin/releases/tag/v0.3.1) (2024-01-26)

### Changes

* Rewrite library scan request handling
* Return a ScanRequest for MusicLibrary::rescan

### Fixes

* Only report library scan progress on stopping thread if we're actually running
* Remove leftover debug message


## [0.3.0](https://github.com/fooyin/fooyin/releases/tag/v0.3.0) (2024-01-26)

### Features

* Command line support
* Support opening files/directories with fooyin

### Changes

* Create AudioBuffer, AudioFormat to handle audio data ([#37](https://github.com/fooyin/fooyin/pull/37))
* Add widget context to TrackSelectionController
* Automatically switch to playlist when using 'Send to new playlist' option
* Allow starting playlists without explicitly setting the current track index
* Emit playlistTracksChanged in createPlaylist if playlist isn't new
* SDL2 plugin is now a push-based audio output

### Fixes

* Only add files with supported extensions
* Erase associated state and undo history when removing playlists
* Only restore previous playlist state when not resetting
* Set correct flag when appending tracks to a playlist
* Quieten ALSA output messages


## [0.2.1](https://github.com/fooyin/fooyin/releases/tag/v0.2.0) (2024-01-23)

* Fix crash when a library scan detects new and changed tracks


## [0.2.0](https://github.com/fooyin/fooyin/releases/tag/v0.2.0) (2024-01-23)

### Features

* Add gapless playback option
* Add column alignment options to Library Filter

### Changes

* Tracks not associated with a library are no longer added to several widgets
* Stop playback on next track if playlist is removed
* Clear all active filters when searching Library Filters
* Remove all active filters when resetting Library Filters
* Add newly found directories to LibraryWatcher

### Fixes

* Fix playlist header reporting an incorrect section count
* Fix a race condition when reporting library scan results
* Correctly mark all tracks not found missing
* Update library tracks if they were previously not found


## [0.1.0](https://github.com/fooyin/fooyin/releases/tag/v0.1.0) (2024-01-21)

* Initial release of fooyin.
