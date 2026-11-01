
/* ==== FUN_0049e020 @ 0049e020 ==== 
 * signature: undefined FUN_0049e020(void)
 * body: 0049e020-0049e075;0049e0aa-0049e0ab
 */

/* WARNING: Instruction at (ram,0x0049e093) overlaps instruction at (ram,0x0049e090)
    */
/* WARNING: Removing unreachable block (ram,0x0049e02b) */
/* WARNING: Removing unreachable block (ram,0x0049e0aa) */
/* WARNING: Removing unreachable block (ram,0x0049e03d) */
/* WARNING: Removing unreachable block (ram,0x0049e042) */
/* WARNING: Removing unreachable block (ram,0x0049e0a7) */
/* WARNING: Removing unreachable block (ram,0x0049e093) */

uint FUN_0049e020(uint param_1,undefined2 param_2)

{
  undefined1 uVar1;
  int unaff_EBX;
  undefined4 *unaff_ESI;
  undefined1 *unaff_EDI;
  
  uVar1 = in(param_2);
  *unaff_EDI = uVar1;
  out(*unaff_ESI,param_2);
  *(undefined4 *)(unaff_EBX + 0x235) = 1;
  return param_1 | 0x54;
}


