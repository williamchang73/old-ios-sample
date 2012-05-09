//
//  evernote.h
//  client
//
//  Evernote API sample code is provided under the terms specified in the file LICENSE.txt which was included with this distribution.
//

#import <Foundation/Foundation.h>

#import "THTTPClient.h"
#import "TBinaryProtocol.h"
#import "EDAMUserStore.h"
#import "EDAMNoteStore.h"
#import "EDAMErrors.h"



extern NSString * const authToken;
extern NSString * const userStoreUri;
extern NSString * const noteStoreUriBase;

@interface Evernote : NSObject {
    NSURL *noteStoreUri;
    
    EDAMNoteStoreClient *noteStore;
    
    Evernote *sharedEvernoteManager;
}


@property(retain) NSURL * noteStoreUri;

@property(retain) EDAMNoteStoreClient *noteStore;


+ (Evernote *)sharedInstance;

- (void) connect; 

- (NSArray *) listNotebooks;

- (EDAMNoteList *) findNotes: (EDAMNoteFilter *) filter;

- (EDAMNote *) getNote: (NSString *) guid;

- (void) deleteNote: (NSString *) guid;

- (void) createNote: (EDAMNote *) note;


    
@end
