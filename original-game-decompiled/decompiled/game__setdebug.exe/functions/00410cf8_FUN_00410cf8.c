
/* ==== FUN_00410cf8 @ 00410cf8 ==== 
 * signature: int * __register FUN_00410cf8(int * param_1, char param_2, undefined * param_3, ushort param_4)
 * body: 00410cf8-00410dac
 */

int * FUN_00410cf8(int *param_1,char param_2,undefined *param_3,ushort param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *extraout_ECX;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  undefined *local_10;
  undefined1 local_c;
  char local_5;
  
  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffd4,in_stack_ffffffd8);
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  if (param_4 == 0xffff) {
    iVar1 = FUN_00407d34(param_3);
    param_1[1] = iVar1;
    if (iVar1 < 0) {
      local_c = 0xb;
      local_10 = param_3;
      uVar2 = FUN_0040aa30((int)&DAT_0040d510,'\x01',(undefined4 *)PTR_PTR_00446ce4,0,&local_10);
      FUN_0040346c(uVar2);
    }
  }
  else {
    iVar1 = FUN_00407cf4(param_3,(uint)param_4);
    param_1[1] = iVar1;
    if (param_1[1] < 0) {
      local_c = 0xb;
      local_10 = param_3;
      uVar2 = FUN_0040aa30((int)&DAT_0040d56c,'\x01',(undefined4 *)PTR_PTR_00446cf4,0,&local_10);
      FUN_0040346c(uVar2);
    }
  }
  if (local_5 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffd4;
  }
  return param_1;
}


