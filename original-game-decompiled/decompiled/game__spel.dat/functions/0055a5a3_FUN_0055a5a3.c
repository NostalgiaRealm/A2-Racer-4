
/* ==== FUN_0055a5a3 @ 0055a5a3 ==== 
 * signature: int __cdecl FUN_0055a5a3(int * param_1)
 * body: 0055a5a3-0055a5dd
 */

int __cdecl FUN_0055a5a3(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = flsall(0);
    return iVar1;
  }
  iVar1 = FUN_0055a5de(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_005630b8(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


