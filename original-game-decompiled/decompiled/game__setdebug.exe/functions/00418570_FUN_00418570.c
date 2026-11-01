
/* ==== FUN_00418570 @ 00418570 ==== 
 * signature: ushort __register FUN_00418570(ushort * param_1)
 * body: 00418570-00418585
 */

ushort FUN_00418570(ushort *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  
  uVar2 = 0;
  puVar1 = param_1 + 10;
  for (; (int)param_1 < (int)puVar1; param_1 = param_1 + 1) {
    uVar2 = uVar2 ^ *param_1;
  }
  return uVar2;
}


