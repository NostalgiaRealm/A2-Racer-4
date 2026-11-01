
/* ==== FUN_004708f8 @ 004708f8 ==== 
 * signature: undefined __register FUN_004708f8(int * param_1, int param_2, undefined4 * param_3)
 * body: 004708f8-0047092c;0047094d-00470ad2;00470aec-00470af2
 */

void FUN_004708f8(int *param_1,int param_2,undefined4 *param_3)

{
  VARIANTARG *pVVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined3 uVar4;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined3 uVar5;
  uint *in_FS_OFFSET;
  uint uStack_34;
  uint uStack_2c;
  code *pcStack_28;
  undefined1 *puStack_24;
  undefined1 local_13;
  undefined2 local_12;
  uint local_10;
  undefined1 local_a;
  byte local_9;
  int *local_8;
  
  puStack_24 = &stack0xfffffffc;
  pVVar1 = (VARIANTARG *)*param_3;
  pcStack_28 = thunk_FUN_00403408;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_2c;
  local_8 = param_1;
  switch(param_2) {
  case -0x25f:
  case -0x25e:
  case -0x25d:
    if (3 < (int)param_3[2]) {
      puStack_24 = &stack0xfffffffc;
      uVar2 = FUN_00404d38(pVVar1 + 3);
      local_10 = FUN_00404d38(pVVar1 + 2);
      local_10 = local_10 & 7;
      local_a = (&DAT_004ab0c0)[uVar2 & 7];
      local_9 = (&DAT_004ab0b8)[uVar2 & 7] | (&DAT_004ab0b0)[local_10];
      uVar2 = FUN_00404d38(pVVar1 + 1);
      uVar3 = FUN_00404d38(pVVar1);
      uVar4 = (undefined3)((uint)extraout_ECX_01 >> 8);
      uVar5 = (undefined3)((uint)extraout_EDX >> 8);
      local_10 = uVar3;
      if (param_2 == -0x25f) {
        FUN_00403178(local_8,CONCAT31(uVar5,local_a),CONCAT31(uVar4,local_9));
        uStack_34 = uVar3;
      }
      else if (param_2 == -0x25e) {
        uStack_34 = 0x470ab0;
        FUN_00403178(local_8,CONCAT31(uVar5,local_9),uVar2);
      }
      else if (param_2 == -0x25d) {
        FUN_00403178(local_8,CONCAT31(uVar5,local_a),CONCAT31(uVar4,local_9));
        uStack_34 = uVar3;
      }
    }
    break;
  case -0x25c:
  case -0x25a:
    if (1 < (int)param_3[2]) {
      puStack_24 = &stack0xfffffffc;
      uVar2 = FUN_00404d38(pVVar1 + 1);
      local_12 = (undefined2)uVar2;
      uVar2 = FUN_00404d38(pVVar1);
      uVar4 = (undefined3)((uint)extraout_ECX >> 8);
      if (param_2 == -0x25c) {
        FUN_00403178(local_8,&local_12,CONCAT31(uVar4,(&DAT_004ab0b0)[uVar2 & 7]));
      }
      else if (param_2 == -0x25a) {
        FUN_00403178(local_8,&local_12,CONCAT31(uVar4,(&DAT_004ab0b0)[uVar2 & 7]));
      }
      if ((*(byte *)((int)&pVVar1[1].n1 + 1) & 0x40) != 0) {
        **(undefined2 **)((int)&pVVar1[1].n1 + 8) = local_12;
      }
    }
    break;
  case -0x25b:
    if (0 < (int)param_3[2]) {
      puStack_24 = &stack0xfffffffc;
      uVar2 = FUN_00404d38(pVVar1);
      local_13 = (undefined1)uVar2;
      FUN_00403178(local_8,&local_13,extraout_ECX_00);
      if ((*(byte *)((int)&pVVar1->n1 + 1) & 0x40) != 0) {
        **(undefined1 **)((int)&pVVar1->n1 + 8) = local_13;
      }
    }
    break;
  case -0x259:
    puStack_24 = &stack0xfffffffc;
    FUN_00403178(param_1,param_2,param_3);
    break;
  case -600:
    FUN_00403178(param_1,param_2,param_3);
  }
  *in_FS_OFFSET = uStack_34;
  return;
}


