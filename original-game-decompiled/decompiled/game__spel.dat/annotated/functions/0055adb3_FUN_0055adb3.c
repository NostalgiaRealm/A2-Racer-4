
/* ==== FUN_0055adb3 @ 0055adb3 ==== 
 * signature: float10 __thiscall FUN_0055adb3(undefined * param_1, byte * param_2, int * param_3)
 * body: 0055adb3-0055ae4c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0055adb3(undefined *param_1,byte *param_2,int *param_3)

{
  uint uVar1;
  uint *puVar2;
  byte *_Str;
  float10 fVar3;
  byte *this;
  undefined *puVar4;
  
  _Str = param_2;
  while( true ) {
    if (DAT_005c8378 < 2) {
      uVar1 = (byte)PTR_DAT_005c8384[(uint)*_Str * 2] & 8;
      param_1 = PTR_DAT_005c8384;
    }
    else {
      puVar4 = (undefined *)0x8;
      uVar1 = FUN_0055c336(param_1,(uint)*_Str,8);
      param_1 = puVar4;
    }
    if (uVar1 == 0) break;
    _Str = _Str + 1;
  }
  this = _Str;
  _strlen((char *)_Str);
  puVar2 = (uint *)FUN_00561206(this,_Str);
  if (param_3 != (int *)0x0) {
    *param_3 = (int)(_Str + puVar2[1]);
  }
  uVar1 = *puVar2;
  if ((uVar1 & 0x240) == 0) {
    if ((uVar1 & 0x81) == 0) {
      if ((uVar1 & 0x100) == 0) {
        return (float10)*(double *)(puVar2 + 4);
      }
      fVar3 = (float10)0;
    }
    else {
      fVar3 = (float10)_DAT_005c8c50;
      if (*_Str == 0x2d) {
        fVar3 = -fVar3;
      }
    }
    DAT_0074dc60 = 0x22;
  }
  else {
    fVar3 = (float10)0;
    if (param_3 != (int *)0x0) {
      *param_3 = (int)param_2;
    }
  }
  return fVar3;
}


