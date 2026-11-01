
/* ==== FUN_00424a00 @ 00424a00 ==== 
 * signature: undefined __register FUN_00424a00(int * param_1, char param_2)
 * body: 00424a00-00424a27
 */

void FUN_00424a00(int *param_1,char param_2)

{
  bool bVar1;
  
  bVar1 = FUN_004249f0(param_1);
  if ((bool)param_2 != bVar1) {
    if (param_2 == '\0') {
      FUN_00421cbc((int *)0x0);
    }
    else {
      FUN_00421cbc(param_1);
    }
  }
  return;
}


