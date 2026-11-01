
/* ==== FUN_00408750 @ 00408750 ==== 
 * signature: undefined __register FUN_00408750(int * param_1, byte * param_2, undefined4 param_3, undefined4 param_4)
 * body: 00408750-00408817
 */

/* WARNING: Removing unreachable block (ram,0x0040877a) */

void FUN_00408750(int *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte local_100e [10];
  int *piStack_1004;
  undefined4 local_c;
  byte *local_8;
  
  piStack_1004 = param_1;
  local_c = param_3;
  local_8 = param_2;
  iVar1 = FUN_00403c38((int)param_2);
  if (iVar1 < 0xc02) {
    iVar1 = FUN_00403c38((int)local_8);
    uVar2 = FUN_004082dc(local_100e,(byte *)0x1001,local_8,param_4,local_c,iVar1);
    uVar3 = 0x1002;
  }
  else {
    uVar2 = FUN_00403c38((int)local_8);
    uVar3 = uVar2;
  }
  if ((int)uVar2 < (int)(uVar3 - 1)) {
    FUN_00403aa0(param_1,(undefined4 *)local_100e,uVar2);
  }
  else {
    while ((int)(uVar3 - 1) <= (int)uVar2) {
      uVar3 = uVar3 * 2;
      FUN_004039b8(param_1);
      FUN_00403f6c(param_1,uVar3);
      iVar1 = FUN_00403c38((int)local_8);
      uVar2 = FUN_004082dc((byte *)*param_1,(byte *)(uVar3 - 1),local_8,param_4,local_c,iVar1);
    }
    FUN_00403f6c(param_1,uVar2);
  }
  return;
}


