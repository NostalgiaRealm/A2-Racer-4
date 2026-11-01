
/* ==== FUN_0040487c @ 0040487c ==== 
 * signature: undefined4 * __register FUN_0040487c(int param_1, char * param_2)
 * body: 0040487c-0040488e
 */

undefined4 * FUN_0040487c(int param_1,char *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0040277c(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00404540(puVar1,param_2);
  }
  return puVar1;
}


