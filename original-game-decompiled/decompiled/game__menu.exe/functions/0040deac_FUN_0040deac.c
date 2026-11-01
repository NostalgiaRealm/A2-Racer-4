
/* ==== FUN_0040deac @ 0040deac ==== 
 * signature: undefined __register FUN_0040deac(char * param_1, byte * param_2)
 * body: 0040deac-0040debe
 */

void FUN_0040deac(char *param_1,byte *param_2)

{
  if (*param_1 == '\x01') {
    FUN_00408618(param_2);
    return;
  }
  FUN_0040de60((int)param_1,(int)param_2);
  return;
}


