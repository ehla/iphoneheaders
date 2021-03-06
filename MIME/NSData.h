/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <Foundation/NSData.h>
#import "MIME-Structs.h"


@interface NSData (NSDataExtensions)
-(id)mf_subdataWithRange:(NSRange)range;
-(BOOL)mf_immutable;
@end

@interface NSData (MimeDataEncoding)
+(unsigned)mf_quotedPrintableLengthOfHeaderBytes:(const char*)headerBytes length:(unsigned)length;
-(id)mf_decodeQuotedPrintableForText:(BOOL)text;
-(id)mf_encodeQuotedPrintableForText:(BOOL)text allowCancel:(BOOL)cancel;
-(id)mf_decodeBase64;
-(id)mf_decodeBase64InRange:(NSRange*)range;
-(BOOL)mf_isValidBase64Data;
-(id)mf_encodeBase64WithoutLineBreaks;
-(id)mf_encodeBase64WithoutLineBreaksOrPadding;
-(id)mf_encodeBase64;
-(id)mf_decodeModifiedBase64;
-(id)mf_encodeModifiedBase64;
-(id)mf_encodeBase64HeaderData;
-(void)mf_appendBase64EncodedDataToData:(id)data;
@end

@interface NSData (NSDataUtils)
-(NSRange)mf_rangeOfRFC822HeaderData;
-(id)mf_subdataToIndex:(unsigned)index;
-(id)mf_subdataFromIndex:(unsigned)index;
-(NSRange)mf_rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;
-(NSRange)mf_rangeOfByteFromSet:(id)set options:(unsigned)options range:(NSRange)range;
-(NSRange)mf_rangeOfByteFromSet:(id)set;
-(NSRange)mf_rangeOfCString:(const char*)cstring;
-(NSRange)mf_rangeOfCString:(const char*)cstring options:(unsigned)options;
-(NSRange)mf_rangeOfCString:(const char*)cstring options:(unsigned)options range:(NSRange)range;
-(id)mf_dataByConvertingUnixNewlinesToNetwork;
@end

@interface NSData (UuEnDeCode)
-(id)mf_uudecodedDataIntoFile:(id*)file mode:(unsigned*)mode;
-(id)mf_uuencodedDataWithFile:(id)file mode:(unsigned)mode;
@end

