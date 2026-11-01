
/* ==== __break @ 0056ab9e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0056ab9e-0056ab9e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


