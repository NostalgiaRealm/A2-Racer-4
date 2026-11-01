
/* ==== __break @ 0056ab9b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0056ab9b-0056ab9b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


