/*

	Filename:	ImageAdapter.h
	Contents:	Declaration for ImageAdapter-class
	Author:	Heikki Suhonen

*/

#ifndef IMAGE_ADAPTER_H
#define IMAGE_ADAPTER_H

/*
	ImageAdapter can be used as a base for manipulators that want to
	deal with instances of Image-class. This class defines one function
	through which the Image can be set.
*/

class Image;

class ImageAdapter {
protected:
		Image	*image;
public:
		ImageAdapter() { image = NULL; }

void		SetImage(Image *img) { image = img; }
};

#endif
