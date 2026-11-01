
/* ==== FUN_004144d4 @ 004144d4 ==== 
 * signature: undefined __register FUN_004144d4(int * param_1, undefined4 * param_2, undefined4 param_3)
 * body: 004144d4-00414518
 */

void FUN_004144d4(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  int local_c;
  int *local_8;
  
  local_8 = param_1;
  pcVar2 = (code *)FUN_0040fce8(*(int *)*param_2);
  if ((pcVar2 != (code *)0x0) && (cVar1 = (*pcVar2)(param_3,&local_c), cVar1 != '\0')) {
    FUN_0040dff4(local_8,param_2,local_c);
    return;
  }
  FUN_004132b4();
  return;
}


