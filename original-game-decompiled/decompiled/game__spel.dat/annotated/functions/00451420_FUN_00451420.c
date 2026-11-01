
/* ==== FUN_00451420 @ 00451420 ==== 
 * signature: undefined4 __cdecl FUN_00451420(int param_1)
 * body: 00451420-00451456
 */

undefined4 __cdecl FUN_00451420(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  int local_4;
  
  local_4 = DAT_006fba58;
  iVar3 = param_1 * 0xf0;
  iVar1 = iVar3 + DAT_00715e50;
  switch(*(undefined4 *)(iVar3 + 0x2c + DAT_00715e50)) {
  case 0:
    iVar1 = FUN_00453480(param_1,&local_4);
    if (iVar1 == 0) {
      FUN_00451380(param_1);
      iVar1 = FUN_004a7bd0(DAT_00715e50 + iVar3);
      FUN_00478450(&DAT_00712678,param_1,iVar1);
    }
    else {
      *(undefined4 *)(iVar3 + 0x2c + DAT_00715e50) = 1;
    }
    break;
  case 1:
    uVar2 = FUN_004a7bd0(iVar1);
    script_fire_OnPickup(param_1,uVar2);
    iVar1 = iVar3 + DAT_00715e50;
    fVar4 = FUN_004a67f0(0x7128b0);
    *(float *)(iVar1 + 0xb4) = (float)fVar4;
    *(undefined4 *)(iVar3 + 0xe0 + DAT_00715e50) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x2c + DAT_00715e50) = 2;
    break;
  case 2:
    fVar4 = FUN_004a67f0(0x7128b0);
    if (fVar4 - (float10)*(float *)(iVar1 + 0xb4) < (float10)*(float *)(iVar3 + 0x58 + DAT_00715e50)
       ) {
      uVar2 = FUN_004a7bd0(iVar3 + DAT_00715e50);
      FUN_00478010(param_1,uVar2);
    }
    else {
      *(undefined4 *)(iVar3 + DAT_00715e50 + 0x54) = 0;
      *(undefined4 *)(iVar3 + 0x2c + DAT_00715e50) = 3;
    }
    break;
  case 3:
    if ((0.0 <= *(float *)(iVar1 + 0xb0)) &&
       (fVar4 = FUN_004a67f0(0x7128b0),
       (float10)*(float *)(iVar3 + 0xb0 + DAT_00715e50) <= fVar4 - (float10)*(float *)(iVar1 + 0xb4)
       )) {
      *(undefined4 *)(iVar3 + 0x54 + DAT_00715e50) = 1;
      *(undefined4 *)(iVar3 + 0x2c + DAT_00715e50) = 0;
    }
  }
  iVar1 = iVar3 + DAT_00715e50;
  if (*(float *)(iVar3 + 0xe0 + DAT_00715e50) != 0.0) {
    fVar4 = FUN_004a67f0(0x7128b0);
    if ((float10)*(float *)(iVar3 + 0xb8 + DAT_00715e50) <=
        fVar4 - (float10)*(float *)(iVar1 + 0xb4)) {
      uVar2 = FUN_004a7bd0(iVar3 + DAT_00715e50);
      FUN_00478230(param_1,uVar2);
      *(undefined4 *)(iVar3 + 0xe0 + DAT_00715e50) = 0;
    }
  }
  FUN_004b5770(DAT_0073b0d0 + *(int *)(iVar3 + 0x24 + DAT_00715e50) * 0xa9);
  return 1;
}


