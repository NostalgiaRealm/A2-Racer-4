
/* ==== FUN_00411718 @ 00411718 ==== 
 * signature: int __register FUN_00411718(char * param_1, byte * param_2)
 * body: 00411718-0041172d
 */

int FUN_00411718(char *param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040ce60(param_1,param_2);
  if (iVar1 == -1) {
    FUN_00411700();
  }
  return iVar1;
}


