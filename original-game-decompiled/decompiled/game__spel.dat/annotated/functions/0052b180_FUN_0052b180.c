
/* ==== FUN_0052b180 @ 0052b180 ==== 
 * signature: float10 __stdcall FUN_0052b180(void)
 * body: 0052b180-0052b1eb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0052b180(void)

{
  double dVar1;
  float10 fVar2;
  
  dVar1 = _DAT_0074c490;
  if (_DAT_0074c490 <= (double)CONCAT44(DAT_0074c67c,DAT_0074c678)) {
    dVar1 = (double)CONCAT44(DAT_0074c67c,DAT_0074c678);
  }
  fVar2 = (float10)dVar1 + (float10)_DAT_0074c490;
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_maxouter__max_distance_from_f_005c25e4);
    fVar2 = (float10)(double)fVar2;
  }
  return fVar2;
}


