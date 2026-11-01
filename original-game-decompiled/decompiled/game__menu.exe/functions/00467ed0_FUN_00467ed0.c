
/* ==== FUN_00467ed0 @ 00467ed0 ==== 
 * signature: int * __register FUN_00467ed0(int param_1, byte param_2)
 * body: 00467ed0-00467f01
 */

int * FUN_00467ed0(int param_1,byte param_2)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_00467d48(param_1,(uint)param_2);
  cVar1 = (**(code **)(*piVar2 + 0x1c))();
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_00467d48(param_1,0);
  }
  return piVar2;
}


