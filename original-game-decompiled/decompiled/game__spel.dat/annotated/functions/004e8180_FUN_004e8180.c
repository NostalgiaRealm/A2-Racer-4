
/* ==== FUN_004e8180 @ 004e8180 ==== 
 * signature: undefined __stdcall FUN_004e8180(void)
 * body: 004e8180-004e81db
 */

void FUN_004e8180(void)

{
  if ((DAT_00750060 & 1) == 0) {
    DAT_00750060 = DAT_00750060 | 1;
  }
  FUN_005584e0(0x4d1400);
  if ((DAT_00750061 & 1) == 0) {
    DAT_00750061 = DAT_00750061 | 1;
  }
  FUN_005584e0(0x4d1400);
  if ((DAT_00750062 & 1) == 0) {
    DAT_00750062 = DAT_00750062 | 1;
  }
  FUN_005584e0(0x4d1400);
  return;
}


