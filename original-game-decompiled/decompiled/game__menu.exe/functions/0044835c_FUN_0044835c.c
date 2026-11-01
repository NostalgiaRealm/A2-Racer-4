
/* ==== FUN_0044835c @ 0044835c ==== 
 * signature: undefined __register FUN_0044835c(int * param_1, int * param_2, undefined4 param_3)
 * body: 0044835c-0044837d
 */

void FUN_0044835c(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = *(char *)((int)param_1 + 0x216);
  TForm_set_ActiveControl(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xb0))();
  }
  return;
}


