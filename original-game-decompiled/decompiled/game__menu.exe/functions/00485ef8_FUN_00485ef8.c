
/* ==== FUN_00485ef8 @ 00485ef8 ==== 
 * signature: undefined __register FUN_00485ef8(int * param_1, int * param_2)
 * body: 00485ef8-00485f46
 */

void FUN_00485ef8(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00485c54((int)param_1,(int)param_2,'\x01',(*(byte *)(param_1 + 8) & 0x10) == 0
                              );
  if (param_2 == piVar1) {
    piVar1 = (int *)0x0;
  }
  FUN_00485780((int)param_2,'\0');
  param_2[0x7d] = 0;
  FUN_00410448((int *)param_1[0x90],(int)param_2);
  TPageControl_set_ActivePage(param_1,piVar1);
  return;
}


