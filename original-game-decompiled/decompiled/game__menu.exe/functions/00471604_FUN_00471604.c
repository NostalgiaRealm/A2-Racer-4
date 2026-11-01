
/* ==== FUN_00471604 @ 00471604 ==== 
 * signature: undefined FUN_00471604(void)
 * body: 00471604-0047162a
 */

undefined4 FUN_00471604(void)

{
  int iVar1;
  HMENU in_stack_00000008;
  
  while( true ) {
    iVar1 = GetMenuItemCount(in_stack_00000008);
    if (iVar1 < 1) break;
    RemoveMenu(in_stack_00000008,0,0x400);
  }
  return 0;
}


