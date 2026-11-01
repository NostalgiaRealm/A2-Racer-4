
/* ==== FUN_004037b8 @ 004037b8 ==== 
 * signature: undefined FUN_004037b8(void)
 * body: 004037b8-00403857
 */

void FUN_004037b8(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_stack_00000004;
  
  iVar1 = *in_stack_00000004;
  if (iVar1 < -0x3fffff6d) {
    if (iVar1 == -0x3fffff6e) {
LAB_00403825:
      uVar2 = 0xcf;
      goto LAB_00403847;
    }
    if (iVar1 < -0x3fffff71) {
      if (iVar1 == -0x3fffff72) {
        uVar2 = 200;
        goto LAB_00403847;
      }
      if (iVar1 == -0x3ffffffb) {
        uVar2 = 0xd8;
        goto LAB_00403847;
      }
      if (iVar1 == -0x3fffff74) {
        uVar2 = 0xc9;
        goto LAB_00403847;
      }
      if (iVar1 == -0x3fffff73) goto LAB_00403831;
    }
    else {
      if (iVar1 + 0x3fffff71U < 2) goto LAB_00403825;
      if (iVar1 + 0x3fffff71U == 2) {
        uVar2 = 0xcd;
        goto LAB_00403847;
      }
    }
  }
  else if (iVar1 < -0x3fffff69) {
    if (iVar1 == -0x3fffff6a) {
      uVar2 = 0xda;
      goto LAB_00403847;
    }
    if (iVar1 == -0x3fffff6d) {
LAB_00403831:
      uVar2 = 0xce;
      goto LAB_00403847;
    }
    if (iVar1 == -0x3fffff6c) {
      uVar2 = 200;
      goto LAB_00403847;
    }
    if (iVar1 == -0x3fffff6b) {
      uVar2 = 0xd7;
      goto LAB_00403847;
    }
  }
  else {
    if (iVar1 == -0x3fffff03) {
      uVar2 = 0xca;
      goto LAB_00403847;
    }
    if (iVar1 == -0x3ffffec6) {
      uVar2 = 0xd9;
      goto LAB_00403847;
    }
  }
  uVar2 = 0xff;
LAB_00403847:
  FUN_004037ac(uVar2);
  return;
}


