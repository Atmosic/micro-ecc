/* Copyright 2014, Kenneth MacKay. Licensed under the BSD 2-clause license. */
/* Copyright 2023-2024, Atmosic */

#include "uECC.h"

/* Modify (x1, y1) => (x1 * z^2, y1 * z^3) */
void apply_z(uECC_word_t * X1,
             uECC_word_t * Y1,
             const uECC_word_t * const Z,
             uECC_Curve curve);

/* P = (x1, y1) => 2P, (x2, y2) => P' */
void XYcZ_initial_double(uECC_word_t * X1,
                         uECC_word_t * Y1,
                         uECC_word_t * X2,
                         uECC_word_t * Y2,
                         const uECC_word_t * const initial_Z,
                         uECC_Curve curve);

/* Input P = (x1, y1, Z), Q = (x2, y2, Z)
   Output P' = (x1', y1', Z3), P + Q = (x3, y3, Z3)
   or P => P', Q => P + Q
*/
void XYcZ_add(uECC_word_t * X1,
              uECC_word_t * Y1,
              uECC_word_t * X2,
              uECC_word_t * Y2,
              uECC_Curve curve);

/* Input P = (x1, y1, Z), Q = (x2, y2, Z)
   Output P + Q = (x3, y3, Z3), P - Q = (x3', y3', Z3)
   or P => P - Q, Q => P + Q
*/
void XYcZ_addC(uECC_word_t * X1,
               uECC_word_t * Y1,
               uECC_word_t * X2,
               uECC_word_t * Y2,
               uECC_Curve curve);
