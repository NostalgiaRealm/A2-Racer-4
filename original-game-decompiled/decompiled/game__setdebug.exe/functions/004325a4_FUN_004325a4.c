
/* ==== FUN_004325a4 @ 004325a4 ==== 
 * signature: char __register FUN_004325a4(int * param_1, int param_2, undefined * param_3, int param_4)
 * body: 004325a4-00432603
 */

char FUN_004325a4(int *param_1,int param_2,undefined *param_3,int param_4)

{
  int iVar1;
  char local_d;
  
  if (param_2 != 0) {
    local_d = '\0';
    while (local_d == '\0') {
      iVar1 = FUN_00434938(param_2);
      if (iVar1 <= *param_1) {
        return '\0';
      }
      iVar1 = FUN_00434948(param_2,*param_1);
      if (*(byte *)(param_4 + -1) < *(byte *)(iVar1 + 0x33)) {
        return '\0';
      }
      local_d = (*(code *)param_3)(iVar1);
      *param_1 = *param_1 + 1;
    }
  }
  return local_d;
}


