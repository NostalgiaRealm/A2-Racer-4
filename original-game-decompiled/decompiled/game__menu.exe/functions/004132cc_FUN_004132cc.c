
/* ==== FUN_004132cc @ 004132cc ==== 
 * signature: int __register FUN_004132cc(char * param_1, byte * param_2)
 * body: 004132cc-004132e1
 */

int FUN_004132cc(char *param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040deac(param_1,param_2);
  if (iVar1 == -1) {
    FUN_004132b4();
  }
  return iVar1;
}


