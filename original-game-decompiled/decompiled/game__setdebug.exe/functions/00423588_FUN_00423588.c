
/* ==== FUN_00423588 @ 00423588 ==== 
 * signature: undefined __register FUN_00423588(int * param_1, int param_2)
 * body: 00423588-0042359f
 */

void FUN_00423588(int *param_1,int param_2)

{
  if (param_2 != param_1[0x16]) {
    FUN_00423554(param_1);
    param_1[0x16] = param_2;
  }
  return;
}


