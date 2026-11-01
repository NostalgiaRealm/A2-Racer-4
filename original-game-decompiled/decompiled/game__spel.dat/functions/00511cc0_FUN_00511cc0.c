
/* ==== FUN_00511cc0 @ 00511cc0 ==== 
 * signature: int * __cdecl FUN_00511cc0(int param_1)
 * body: 00511cc0-00511d10
 */

int * __cdecl FUN_00511cc0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (*(ushort *)(param_1 + 2) < 3) {
    return (int *)0x0;
  }
  if (*(ushort *)(param_1 + 2) == 3) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    piVar2 = FUN_00511aa0((double *)*puVar1,(double *)puVar1[1],(double *)puVar1[2]);
    return piVar2;
  }
  piVar2 = (int *)FUN_00511610(param_1);
  return piVar2;
}


