
/* ==== FUN_004302fc @ 004302fc ==== 
 * signature: undefined __register FUN_004302fc(int * param_1)
 * body: 004302fc-0043038a
 */

void FUN_004302fc(int *param_1)

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
  pcStack_1c = thunk_FUN_00403434;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  p_Var1 = ImageList_Create(param_1[10],param_1[9],
                            *(uint *)(&DAT_00446750 + (uint)*(byte *)((int)param_1 + 0x35) * 4) |
                            0xfe,param_1[0xb],param_1[0xb]);
  param_1[0xc] = (int)p_Var1;
  if (p_Var1 == (HIMAGELIST)0x0) {
    FUN_00405298((undefined4 *)PTR_PTR_00446c8c,(int *)&local_8);
    piVar2 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',local_8);
    FUN_0040346c(piVar2);
  }
  if (param_1[0xe] != 0x1fffffff) {
    FUN_00430520(param_1,param_1[0xe]);
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00430392;
  pcStack_1c = (code *)0x43038a;
  FUN_004039b8((int *)&local_8);
  return;
}


