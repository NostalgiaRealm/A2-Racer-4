
/* ==== FUN_004a0100 @ 004a0100 ==== 
 * signature: undefined __cdecl FUN_004a0100(int param_1, byte * param_2)
 * body: 004a0100-004a013b
 */

void __cdecl FUN_004a0100(int param_1,byte *param_2)

{
  CHAR *pCVar1;
  CHAR local_100 [256];
  
  pCVar1 = local_100;
  if (param_1 == 0) {
    FUN_005590ae(local_100,param_2,(undefined4 *)&stack0x0000000c);
    FUN_004a0140(local_100,(int)pCVar1);
  }
  return;
}


