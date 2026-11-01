
/* ==== FUN_00474310 @ 00474310 ==== 
 * signature: int * __register FUN_00474310(int * param_1, char param_2, int param_3, int param_4)
 * body: 00474310-0047435d
 */

int * FUN_00474310(int *param_1,char param_2,int param_3,int param_4)

{
  int iVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_0043a26c(param_1,'\0',param_3,param_4);
  iVar1 = FUN_00402f6c((int *)&DAT_0040eb28,'\x01',extraout_ECX_00);
  param_1[0x1e] = iVar1;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


