
/* ==== FUN_0041cfa0 @ 0041cfa0 ==== 
 * signature: int * __register FUN_0041cfa0(undefined4 param_1, undefined4 param_2, uint param_3)
 * body: 0041cfa0-0041d07e;0041d096-0041d09f
 */

int * FUN_0041cfa0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  RECT *pRVar8;
  undefined4 uStack_34;
  code *pcStack_30;
  undefined1 *puStack_2c;
  RECT local_1c;
  int *local_c;
  uint local_8;
  
  puStack_2c = (undefined1 *)0x41cfba;
  local_8 = param_3;
  local_c = TBitmap_vmt_00c((int *)FUN_0041571c,'\x01',param_3);
  pcStack_30 = thunk_FUN_00403180;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  (**(code **)(*local_c + 0x40))(local_c,8);
  (**(code **)(*local_c + 0x34))(local_c,8);
  piVar1 = (int *)FUN_0041b6f8(local_c);
  TBrush_set_Style((int *)piVar1[5],'\0');
  TBrush_set_Color((int *)piVar1[5],param_2);
  uVar2 = (**(code **)(*local_c + 0x20))();
  pRVar8 = &local_1c;
  uVar3 = (**(code **)(*local_c + 0x2c))();
  FUN_0040e5ac(0,0,uVar3,&pRVar8->left,uVar2);
  FUN_00417100(piVar1,&local_1c);
  uVar7 = 0;
  do {
    uVar6 = 0;
    do {
      uVar4 = uVar7 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      uVar5 = uVar6 & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      if (uVar4 == uVar5) {
        FUN_004173e8(piVar1,uVar6,uVar7,local_8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 9);
    uVar7 = uVar7 + 1;
  } while (uVar7 != 9);
  FUN_0041b410((int)local_c);
  *in_FS_OFFSET = uStack_34;
  return local_c;
}


