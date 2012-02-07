//
//  Parameteriser.h
//  graphicscore
//
//  Created by Zebedee Pedersen on 05/02/2012.
//  Copyright (c) 2012 zebpedersen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Shapes.h"
#import "CAController.h"
#import "TouchArea.h"
#import "ParameteriserDelegateProtocol.h"

@interface Parameteriser : NSObject <TouchAreaDelegate>	{
	id <ParameteriserDelegate> delegate;
	float* points;
	float* curves;
	int		numpoints;
	int		numshapes;
	int		numcurves;
	float	alpha_average;
	
	NSMutableArray*	curves_w;
	NSMutableArray*	points_w;
	
	NSMutableArray*	curves_x;
	NSMutableArray*	points_x;
	
	NSMutableArray*	curves_y;
	NSMutableArray*	points_y;
	
	NSMutableArray*	curves_z;
	NSMutableArray*	points_z;
}

@property	float			alpha_total;
@property	float			sc_red_total;
@property	float			sc_blue_total;
@property	float			sc_green_total;

-(id)initWithDelegate:(id)_delegate;

@end