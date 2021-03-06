/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDMediaRemoteNowPlayingViewController : UIViewController <MCDNowPlayingViewControllerDataSource, MCDNowPlayingViewControllerDelegate, MPUNowPlayingDelegate> {
    struct { 
        unsigned int play : 1; 
        unsigned int pause : 1; 
        unsigned int stop : 1; 
        unsigned int togglePlayPause : 1; 
        unsigned int nextTrack : 1; 
        unsigned int previousTrack : 1; 
        unsigned int toggleRecord : 1; 
        unsigned int fastForward : 1; 
        unsigned int rewind : 1; 
        unsigned int record : 1; 
        unsigned int changePlaybackRate : 1; 
        unsigned int likeTrack : 1; 
        unsigned int banTrack : 1; 
        unsigned int rateTrack : 1; 
        unsigned int bookmarkTrack : 1; 
        unsigned int fastForwardWithInterval : 1; 
        unsigned int rewindWithInterval : 1; 
        unsigned int changeShuffleMode : 1; 
        unsigned int changeRepeatMode : 1; 
        unsigned int changePlaybackProgress : 1; 
    }  __supportedCommandsFlags;
    UIBarButtonItem * _backButton;
    double  _elapsedTime;
    NSString * _expectedPlaybackBundleIdentifier;
    BOOL  _handledWillAppear;
    BOOL  _isScrubbing;
    MCDPCModel * _model;
    MPUNowPlayingController * _nowPlayingController;
    NSDictionary * _nowPlayingInfo;
    MCDNowPlayingViewController * _nowPlayingViewController;
    BOOL  _observingMediaRemoteCommandChanges;
    UILabel * _rightTitleLabel;
    BOOL  _showNavigationBar;
    NSDictionary * _supportedCommands;
    NSMutableDictionary * _transportControlImages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *expectedPlaybackBundleIdentifier;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSDictionary *nowPlayingInfo;
@property (nonatomic) BOOL showNavigationBar;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *transportControlImages;

- (void).cxx_destruct;
- (void)_adjustRightTitleLabelToFit;
- (unsigned int)_bestCommandForFastForwardPosition;
- (unsigned int)_bestCommandForRewindPosition;
- (void)_handleActionSheet;
- (void)_handleWillAppear;
- (struct _MRMediaRemoteCommandInfo { }*)_mediaCommandInfoForCommand:(unsigned int)arg1;
- (void)_nowPlayingAppChangedIsPlaying:(id)arg1;
- (BOOL)_nowPlayingBundleIDMatchesExpectedID;
- (BOOL)_remoteCommandInfoBooleanValue:(unsigned int)arg1;
- (BOOL)_remoteCommandInfoEnabled:(unsigned int)arg1;
- (double)_skipBackwardInterval;
- (double)_skipForwardInterval;
- (id)_skipIntervalButtonImageForInterval:(double)arg1;
- (void)_startObservingRemoteCommandChanges;
- (void)_stopObservingRemoteCommandChanges;
- (void)_supportedControlsDidUpdate:(id)arg1;
- (id)_titleForFeedbackCommand:(unsigned int)arg1;
- (BOOL)_trackActionCommandsAreEnabled;
- (BOOL)_trackIsLikedOrDisliked;
- (void)_updateAllContent;
- (void)_updateBackButton;
- (void)_updateNowPlayingDictionary:(id)arg1;
- (void)_updateSupportedCommands;
- (void)_updateSupportedCommandsWithArray:(id)arg1;
- (id)albumTextForNowPlayingController:(id)arg1;
- (id)artistTextForNowPlayingController:(id)arg1;
- (id)backgroundArtForNowPlayingController:(id)arg1;
- (void)dealloc;
- (id)expectedPlaybackBundleIdentifier;
- (id)initWithModel:(id)arg1;
- (void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2;
- (void)nowPlayingController:(id)arg1 nowPlayingApplicationDidChange:(id)arg2;
- (void)nowPlayingController:(id)arg1 nowPlayingInfoDidChange:(id)arg2;
- (void)nowPlayingController:(id)arg1 playbackStateDidChange:(BOOL)arg2;
- (id)nowPlayingInfo;
- (BOOL)nowPlayingViewController:(id)arg1 buttonShouldBeActive:(int)arg2;
- (void)nowPlayingViewController:(id)arg1 didSendAction:(int)arg2 state:(int)arg3;
- (BOOL)nowPlayingViewController:(id)arg1 shouldDisplayButton:(int)arg2 withImage:(out id*)arg3 existingIdentifier:(id)arg4 tinted:(out BOOL*)arg5;
- (BOOL)nowPlayingViewControllerCanRepeat:(id)arg1;
- (BOOL)nowPlayingViewControllerCanShowMore:(id)arg1;
- (BOOL)nowPlayingViewControllerCanShuffle:(id)arg1;
- (BOOL)nowPlayingViewControllerIsPlaying:(id)arg1;
- (BOOL)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1;
- (void)nowPlayingViewControllerMore:(id)arg1;
- (void)nowPlayingViewControllerToggleRepeat:(id)arg1;
- (void)nowPlayingViewControllerToggleShuffle:(id)arg1;
- (double)playbackDurationForNowPlayingViewController:(id)arg1;
- (double)playbackElapsedTimeForNowPlayingViewController:(id)arg1;
- (BOOL)playbackIsLiveStreamForNowPlayingViewController:(id)arg1;
- (id)preferredFocusEnvironments;
- (int)repeatTypeForNowPlayingViewController:(id)arg1;
- (void)setExpectedPlaybackBundleIdentifier:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setRightTitle:(id)arg1;
- (void)setShowNavigationBar:(BOOL)arg1;
- (void)setTransportControlImages:(id)arg1;
- (BOOL)showNavigationBar;
- (int)shuffleTypeForNowPlayingViewController:(id)arg1;
- (id)titleForNowPlayingController:(id)arg1;
- (id)transportControlImages;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
