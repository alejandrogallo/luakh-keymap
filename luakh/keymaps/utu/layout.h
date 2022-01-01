// LAYOUT =====================================================================
// L15 and R10 are actually the ones above L21, to have a good luakh
// layout I have to put them there so that I can inject the luakh keys
// there
#define LAYOUT( \
  L00, L01, L02, L03, L04,           R00, R01, R02, R03, R04, \
  L05, L06, L07, L08, L09,           R05, R06, R07, R08, R09, \
  L15, L10, L11, L12, L13, L14, R11, R12, R13, R14, R15, R10, \
  L16, L17, L18, L19, L20, L21, R16, R17, R18, R19, R20, R21  \
) \
{ \
  { L04, L03, L02, L01, L00, KC_NO }, \
  { L09, L08, L07, L06, L05, KC_NO }, \
  { L14, L13, L12, L11, L10, L15   }, \
  { L20, L19, L18, L17, L16, L21   }, \
  { R00, R01, R02, R03, R04, KC_NO }, \
  { R05, R06, R07, R08, R09, KC_NO }, \
  { R11, R12, R13, R14, R15, R10   }, \
  { R17, R18, R19, R20, R21, R16   }, \
}

#define LAYOUT_kc( \
  L00, L01, L02, L03, L04,           R00, R01, R02, R03, R04, \
  L05, L06, L07, L08, L09,           R05, R06, R07, R08, R09, \
  L10, L11, L12, L13, L14, L15, R10, R11, R12, R13, R14, R15, \
  L16, L17, L18, L19, L20, L21, R16, R17, R18, R19, R20, R21  \
) \
LAYOUT( \
  KC_##L00, KC_##L01, KC_##L02, KC_##L03, KC_##L04,                     KC_##R00, KC_##R01, KC_##R02, KC_##R03, KC_##R04, \
  KC_##L05, KC_##L06, KC_##L07, KC_##L08, KC_##L09,                     KC_##R05, KC_##R06, KC_##R07, KC_##R08, KC_##R09, \
  KC_##L10, KC_##L11, KC_##L12, KC_##L13, KC_##L14, KC_##L15, KC_##R10, KC_##R11, KC_##R12, KC_##R13, KC_##R14, KC_##R15, \
  KC_##L16, KC_##L17, KC_##L18, KC_##L19, KC_##L20, KC_##L21, KC_##R16, KC_##R17, KC_##R18, KC_##R19, KC_##R20, KC_##R21  \
)

#define LUAKH_kc(LUAKH_NAME,                                      \
            L33,      R31,                                        \
  L41, L42, L43,      R41, R42, R43                               \
  )                                                               \
  LUAKH_APP(LAYOUT_kc,                                            \
                     LUAKH_GET_NAME(LUAKH_NAME, 1),               \
                     LUAKH_GET_NAME(LUAKH_NAME, 2),               \
              L33,   LUAKH_GET_NAME(LUAKH_NAME, 3), R31,          \
    L41, L42, L43,   LUAKH_GET_NAME(LUAKH_NAME, 4), R41, R42, R43 \
  )

