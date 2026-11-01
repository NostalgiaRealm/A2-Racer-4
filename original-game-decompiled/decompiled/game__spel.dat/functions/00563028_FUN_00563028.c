
/* ==== FUN_00563028 @ 00563028 ==== 
 * signature: undefined4 __cdecl FUN_00563028(int * param_1, LONG param_2, LONG param_3, DWORD param_4)
 * body: 00563028-005630b7
 */

undefined4 __cdecl FUN_00563028(int *param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = CONCAT44(param_3,param_2);
  if (((param_1[3] & 0x83U) == 0) || (((param_4 != 0 && (param_4 != 1)) && (param_4 != 2)))) {
    DAT_0074dc60 = 0x16;
  }
  else {
    param_1[3] = param_1[3] & 0xffffffef;
    if (param_4 == 1) {
      uVar2 = FUN_00562ea1((char *)param_1);
      lVar3 = uVar2 + lVar3;
      param_4 = 0;
    }
    param_3 = (LONG)((ulonglong)lVar3 >> 0x20);
    param_2 = (LONG)lVar3;
    FUN_0055a5de(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & 0xfffffffc;
    }
    lVar3 = FUN_005677d3(param_1[4],param_2,param_3,param_4);
    if (lVar3 != -1) {
      return 0;
    }
  }
  return 0xffffffff;
}


