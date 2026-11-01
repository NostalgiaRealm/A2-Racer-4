
/* ==== FUN_004137c0 @ 004137c0 ==== 
 * signature: int __register FUN_004137c0(int param_1, char * param_2, int param_3)
 * body: 004137c0-0041382c
 */

int FUN_004137c0(int param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int local_c;
  
  local_c = param_3;
  local_c = FUN_0040e72c(*(undefined4 **)(param_1 + 0x18),param_2);
  if (((local_c == 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
     (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18))) {
    local_c = FUN_0040e72c(*(undefined4 **)(param_1 + 0x1c),param_2);
  }
  if (*(short *)(param_1 + 0x62) != 0) {
    (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100),param_1,param_2,&local_c);
  }
  if ((local_c != 0) &&
     (uVar1 = thunk_FUN_00402f24(local_c,(int)&PTR_TPersistent_vmt_000_0040e30c),
     (char)uVar1 != '\0')) {
    return local_c;
  }
  FUN_0040e5f0(param_2);
  return local_c;
}


