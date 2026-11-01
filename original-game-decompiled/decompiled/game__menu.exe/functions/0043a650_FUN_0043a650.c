
/* ==== FUN_0043a650 @ 0043a650 ==== 
 * signature: undefined __register FUN_0043a650(int * param_1)
 * body: 0043a650-0043a6de
 */

void FUN_0043a650(int *param_1)

{
  HIMAGELIST p_Var1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  undefined4 *local_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  p_Var1 = ImageList_Create(param_1[10],param_1[9],
                            *(uint *)(&DAT_004aa824 + (uint)*(byte *)((int)param_1 + 0x35) * 4) |
                            0xfe,param_1[0xb],param_1[0xb]);
  param_1[0xc] = (int)p_Var1;
  if (p_Var1 == (HIMAGELIST)0x0) {
    FUN_00405808((undefined4 *)PTR_PTR_004ab8c4,(int *)&local_8);
    piVar2 = FUN_0040b5d8((int *)&DAT_0040ea0c,'\x01',local_8);
    FUN_004036f4(piVar2);
  }
  if (param_1[0xe] != 0x1fffffff) {
    TImageList_set_BkColor(param_1,param_1[0xe]);
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0043a6e6;
  pcStack_1c = (code *)0x43a6de;
  FUN_00403c5c((int *)&local_8);
  return;
}


