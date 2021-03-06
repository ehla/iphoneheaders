/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"
#import "SpringBoard-Structs.h"
#import <Foundation/Foundation.h>

#import <Availability2.h>

@class UITable;

@interface SBWiFiAlertItem : SBAlertItem {
	NSMutableArray* _networks;
	NSTimer* _scanTimer;
	UITable* _table;
	CGSize _size;
	int _joinRow;
	NSString* _password;
	NSDictionary* _joinDict;
	SBAlertItem* _childAlert;
	BOOL _selectingRow;
	BOOL _storedPassword;
	BOOL _passwordFailed;
	BOOL _sentResponse;
}
-(void)scan;
// inherited: -(id)init;
-(int)_joinRow;
-(void)setNetworks:(id)networks;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(void)_setDelegateForAlert:(id)alert delegate:(id)delegate;
-(void)_dismissCurrentChildAlert;
-(void)childAlertDismissed:(id)dismissed;
#endif
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2
-(void)setChildAlert:(id)alert;
#endif
-(id)insertionsForNewNetworks:(id)newNetworks;
-(id)deletionSetForLostNetworks:(id)lostNetworks originalNetworks:(id)networks;
-(void)wifiManager:(id)manager scanCompleted:(id)completed;
-(void)_enableTable;
// inherited: -(void)dismiss;
// inherited: -(void)willDeactivateForReason:(int)reason;
// inherited: -(void)willActivate;
-(void)wifiManager:(id)manager joinCompleted:(int)completed;
-(void)didPresentAlertSheet:(id)sheet;
-(void)passwordEntered:(id)entered;
// inherited: -(void)dealloc;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
// inherited: -(BOOL)allowMenuButtonDismissal;
// inherited: -(void)performUnlockAction;
-(int)numberOfRowsInTable:(id)table;
-(id)table:(id)table cellForRow:(int)row column:(id)column;
-(void)tableSelectionDidChange:(id)tableSelection;
// inherited: -(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
// inherited: -(BOOL)dismissOnLock;
-(void)dismissAlertsForApplicationTransition;
// inherited: -(void)didDeactivateForReason:(int)reason;
@end

