
/* ==== FUN_00467470 @ 00467470 ==== 
 * signature: undefined __fastcall FUN_00467470(int param_1)
 * body: 00467470-00467607
 */

void __fastcall FUN_00467470(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  pcStack_8 = FUN_0056ac5c;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  local_18 = param_1;
  FUN_00468540((void *)(param_1 + 0x44),(int *)&local_1c,(int *)**(int **)(param_1 + 0x48),
               *(int **)(param_1 + 0x48));
  FUN_0054b339(*(LPVOID *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  local_4._0_1_ = 2;
  local_1c = (undefined4 *)*puVar1;
  while (local_1c != puVar1) {
    puVar2 = (undefined4 *)FUN_00448fd0(&local_1c,&local_14);
    FUN_004685d0((void *)(param_1 + 0x34),&local_10,(int *)*puVar2);
  }
  FUN_0054b339(*(LPVOID *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  local_4._0_1_ = 1;
  local_1c = (undefined4 *)*puVar1;
  while (local_1c != puVar1) {
    puVar2 = (undefined4 *)FUN_00448fd0(&local_1c,&local_10);
    FUN_004685d0((void *)(param_1 + 0x24),&local_14,(int *)*puVar2);
  }
  FUN_0054b339(*(LPVOID *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  local_4 = (uint)local_4._1_3_ << 8;
  local_1c = (undefined4 *)*puVar1;
  while (local_1c != puVar1) {
    puVar2 = (undefined4 *)FUN_00448fd0(&local_1c,&local_10);
    FUN_004685d0((void *)(param_1 + 0x14),&local_14,(int *)*puVar2);
  }
  FUN_0054b339(*(LPVOID *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar1 = *(undefined4 **)(param_1 + 8);
  local_4 = 0xffffffff;
  local_1c = (undefined4 *)*puVar1;
  while (local_1c != puVar1) {
    puVar2 = (undefined4 *)FUN_00448fd0(&local_1c,&local_10);
    FUN_004685d0((void *)(param_1 + 4),&local_14,(int *)*puVar2);
  }
  FUN_0054b339(*(LPVOID *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return;
}


