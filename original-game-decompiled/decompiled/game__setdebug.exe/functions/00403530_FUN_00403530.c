
/* ==== FUN_00403530 @ 00403530 ==== 
 * signature: undefined FUN_00403530(void)
 * body: 00403530-004035cf
 */

void FUN_00403530(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_stack_00000004;
  
  iVar1 = *in_stack_00000004;
  if (iVar1 < -0x3fffff6d) {
    if (iVar1 == -0x3fffff6e) {
LAB_0040359d:
      uVar2 = 0xcf;
      goto LAB_004035bf;
    }
    if (iVar1 < -0x3fffff71) {
      if (iVar1 == -0x3fffff72) {
        uVar2 = 200;
        goto LAB_004035bf;
      }
      if (iVar1 == -0x3ffffffb) {
        uVar2 = 0xd8;
        goto LAB_004035bf;
      }
      if (iVar1 == -0x3fffff74) {
        uVar2 = 0xc9;
        goto LAB_004035bf;
      }
      if (iVar1 == -0x3fffff73) goto LAB_004035a9;
    }
    else {
      if (iVar1 + 0x3fffff71U < 2) goto LAB_0040359d;
      if (iVar1 + 0x3fffff71U == 2) {
        uVar2 = 0xcd;
        goto LAB_004035bf;
      }
    }
  }
  else if (iVar1 < -0x3fffff69) {
    if (iVar1 == -0x3fffff6a) {
      uVar2 = 0xda;
      goto LAB_004035bf;
    }
    if (iVar1 == -0x3fffff6d) {
LAB_004035a9:
      uVar2 = 0xce;
      goto LAB_004035bf;
    }
    if (iVar1 == -0x3fffff6c) {
      uVar2 = 200;
      goto LAB_004035bf;
    }
    if (iVar1 == -0x3fffff6b) {
      uVar2 = 0xd7;
      goto LAB_004035bf;
    }
  }
  else {
    if (iVar1 == -0x3fffff03) {
      uVar2 = 0xca;
      goto LAB_004035bf;
    }
    if (iVar1 == -0x3ffffec6) {
      uVar2 = 0xd9;
      goto LAB_004035bf;
    }
  }
  uVar2 = 0xff;
LAB_004035bf:
  FUN_00403524(uVar2);
  return;
}


