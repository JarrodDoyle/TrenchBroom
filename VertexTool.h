//
//  VertexTool.h
//  TrenchBroom
//
//  Created by Kristian Duske on 23.12.11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import "DefaultTool.h"

@class MapWindowController;
@class DragVertexCursor;
@class EditingSystem;

@interface VertexTool : DefaultTool {
    MapWindowController* windowController;
    DragVertexCursor* cursor;
    EditingSystem* editingSystem;
    BOOL drag;
}

- (id)initWithWindowController:(MapWindowController *)theWindowController;

@end
