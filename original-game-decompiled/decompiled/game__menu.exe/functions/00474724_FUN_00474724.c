
/* ==== FUN_00474724 @ 00474724 ==== 
 * signature: undefined __register FUN_00474724(int param_1, char param_2)
 * body: 00474724-00474749
 */

void FUN_00474724(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x20)) && (param_2 != '\0')) {
    FUN_00474634(param_1);
    *(char *)(param_1 + 0x20) = param_2;
    FUN_0047467c(param_1,*(int **)(param_1 + 4));
  }
  return;
}


