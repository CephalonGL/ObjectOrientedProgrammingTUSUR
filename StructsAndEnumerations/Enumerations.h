#pragma once
#include "Color.h"
#include "WeekDay.h"
#include "Genre.h"
#include "StudyForm.h"
#include "SmartphoneManufacturer.h"
#include "YearTime.h"

void DemoEnums();

void WriteColor(Color color);

Color ReadColor();

int CountRed(Color* colors, int count);

int CountColor(Color* colors, int count, Color findedColor);