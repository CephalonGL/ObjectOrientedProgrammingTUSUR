#pragma once
//BUG: Линковка
#include <iostream>
#include <string>
#include <vector>
#include <exception>
#include <math.h>

#include "../Console/Console.h"

using namespace std;

//Lab 3-4:
#include "Book.h"
#include "Route.h"

#include "Airport/Time.h"
#include "Airport/Flight.h"

#include "Geometry/Validator.h"
#include "Geometry/Point.h"
#include "Geometry/Rectangle.h"
#include "Geometry/Ring.h"
#include "Geometry/CollisionManager.h"
#include "Geometry/GeometricProgram.h"

#include "Music/Genre.h"
#include "Music/Song.h"
#include "Music/Album.h"
#include "Music/Band.h"

//Lab 5:
#include "University/Person.h"
#include "University/Student.h"
#include "University/TeacherPost.h"
#include "University/Teacher.h"
#include "University/PersonProgram.h"

#include "Users/Post.h"
#include "Users/User.h"
#include "Users/PaidUser.h"
#include "Users/UserInterface.h"

#include "DiscountSystem/CategoryType.h"
#include "DiscountSystem/Product.h"
#include "DiscountSystem/DiscountBase.h"
#include "DiscountSystem/PercentDiscount.h"
#include "DiscountSystem/CertificateDiscount.h"