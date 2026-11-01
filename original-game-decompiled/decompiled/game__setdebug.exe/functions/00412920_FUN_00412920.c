
/* ==== FUN_00412920 @ 00412920 ==== 
 * signature: undefined __register FUN_00412920(int * param_1, undefined4 * param_2, undefined4 param_3)
 * body: 00412920-00412964
 */

void FUN_00412920(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  int local_c;
  int *local_8;
  
  local_8 = param_1;
  pcVar2 = (code *)FUN_0040eaac(*(int *)*param_2);
  if ((pcVar2 != (code *)0x0) && (cVar1 = (*pcVar2)(param_3,&local_c), cVar1 != '\0')) {
    FUN_0040cf54(local_8,param_2,local_c);
    return;
  }
  FUN_00411700();
  return;
}


