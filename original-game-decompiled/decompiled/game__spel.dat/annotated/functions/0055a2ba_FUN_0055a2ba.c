
/* ==== FUN_0055a2ba @ 0055a2ba ==== 
 * signature: uint __cdecl FUN_0055a2ba(undefined4 * param_1)
 * body: 0055a2ba-0055a2d3
 */

uint __cdecl FUN_0055a2ba(undefined4 *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    return (uint)bVar2;
  }
  uVar3 = FUN_0055fb61(param_1);
  return uVar3;
}


