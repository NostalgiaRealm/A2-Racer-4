
/* ==== FUN_00462444 @ 00462444 ==== 
 * signature: int * __register FUN_00462444(int * param_1, char param_2, int param_3, int param_4)
 * body: 00462444-004624c1
 */

int * FUN_00462444(int *param_1,char param_2,int param_3,int param_4)

{
  int *piVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar2;
  undefined4 extraout_ECX_02;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TDataObject_vmt_004(param_1,'\0',param_3);
  uVar2 = extraout_ECX_00;
  if (param_3 == 0) {
    FUN_00403c40("aTrackList  =  nil");
    uVar2 = extraout_ECX_01;
  }
  piVar1 = TIntegerList_vmt_004((int *)&PTR_TIntegerList_vmt_000_0045e2b4,'\x01',uVar2);
  param_1[2] = (int)piVar1;
  piVar1 = TIntegerList_vmt_004((int *)&PTR_TIntegerList_vmt_000_0045e2b4,'\x01',extraout_ECX_02);
  param_1[3] = (int)piVar1;
  param_1[5] = param_3;
  param_1[6] = param_4;
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


