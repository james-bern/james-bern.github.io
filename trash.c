
<p>in practice, there are some additional details<br>
- i group the TODO's by app version, and try to only work on ones for the current version<br>
- within a version, i group the TODO's by feature or whatever<br>
- the first and most import important feature is <code><a href="https://blog.codinghorror.com/paying-down-your-technical-debt/">TechnicalDebt</a></code> -- this is where bugs, missing pieces of features, proposals to rename variables and functions, etc. go</p>
<pre>
// // v0.0 vertical slice (render lines, create 3D geometry) /////////////////////////////////////////////////////////////////////////////             

// TechnicalDebt                                                                                                                                                
// |Naming
// ||TODO active is not quite the right word for active_toggle_buttons, active_momentary_button
// |GUIComm
// ||TODO can we just store this on the box?--that would be siiiick
// |APP_MOD_*
// ||TODO #define APP_MOD_??? to be CONTROL on Windows and SUPER on Mac (NOTE web browser is going to pose a challenge)
// |WebDev                                                                                                                                                      
// ||TODO <c+=> and <c+-> in chrome                                                                                                                             
// ||TODO <c+=> and <c+-> in safari                                                                                                                             
// ||TODO resizing window vertically does weird clippy stuff to gui text                                                                                        
// |Vim                                                                                                                                                         
// ||TODO grepping before ever calling build and run errors out related to g:have_not_ignored_first_fire_yet                                                    
// ||TODO grepping should open the qf window if it's not yet open                                                                                               
// |Ring                                                                                                                                                        
// ||TODO add to test.c                                                                                                                                         
...

// TopRibbon                                                                                                                                                   
// |TODO could throw dropdowns in a horizontal rack with invisible spacer ACTUAL LOCAL POSITION? local/global?
// |TODO purple top ribbon
// |TODO epsilon spacer in top menu
// |TODO View -> Hide Cancel Buttons

// Popup                                                                                                                                               
// |TODO buffer                                                                                                                                         
// |TODO blue popup cursor                                                                                                                              
// |TODO route hotkey (Escape is a good test case -- have line end and extrude-add on) to the active pane                                               

// Vim                                                                                                                                                 
// |TODO MacroSlam()                                                                                                                                   
// ||TODO use on tree.c, etc.                                                                                                                          

...


// // v0.1 juiced vertical slice ////////////////////////////////////////////////////////////////////////////////////////////////////////////

// TechnicalDebt                                                                                                                                                                                                                           
// |TODO curr_pane->string being passed around as a prefix... (should we just assume that's what the caller would use)
// |TODO consider switching order of lerp args -> lerp(a, t, b)
// |TODO BUG in WASM, mouse moving through toolbox from Select to Deselct hits gap                                                                                                                                                         
// |TODO revisit gui_pane_solve_separators -- the normalization routine is not accounting for separator thickness (i think this is maybe fine...but we need to think about it and document it)                                             
// |TODO revisit middle mouse scroll treatment in app and gui (either fold it into LR or don't, but be consistent across gui and app)                                                                                                      
// |TODO revisit gui_mouse_button_state release logic -- its scary if the button goes away while we're holding it (we'll have a stale key_string)                                                                                          
// |TODO revisit gui_pane_insert to take a pointer to trev_prev_pane or something                                                                                                                                                          

// MultiCursor
// |CursorMirrorX

...</pre>
<p>
<code>done.x</code> is (for me) purely a motivational thing; i don't worry about its formatting and make no effort to maintain the organizational structure from <code>todo.x</code>
honestly, i've never gone back to read it (except to say wow, look at all that stuff i got done)
it's really just a Goggins-style cookie jar
</p>
<pre>// |DONE proof of concept File -> Open
// ||DONE? calling make (<c-cr>) moves cursor to 0 -- i think this is caused by tpope Make (need to mess with the g:have_not_ignored_first_fire_yet flag)        
// ||DONE (combine stb_easy_font_vprintf and text_vprintf) we can make this function emit quads eso style (progressively collapse the in-between functions away)
// ||DONE pen_new_pen, pen->flags ...                                                                                                                           
// |DONE still not quite right, see tmp.x
// |DONE just use this as a global, it's not going to change mid-frame yo (just make sure it doesn't leak into the history system)
// |DONE clamp_to_window_extents
// DONE |fps trace                                                                                                                                                                                                                         
// DONE BUG Check mode build fails                                                                                                                            
// |DONE AppEvent, app_event -> AppEvent, app_event
// |SKIP (NOTE had a fundamental misunderstanding of how ## works -- only allowed in macro defs) use List ## R32 syntax everywhere  instead of List_R32 (this way everything gets hit by find/replace and naming stays in sync)
// |DONE enqueue to the front 
// ||DONE ? use glfw time instead
// |SKIP remove -Wno-missing-braces from build_and_run.bat
// |DONE console should pane should display global messages                                                                                             
// DONE |fps 
// ||DONE get rid of pen_print and just support printf for now (can use the silly ("%S", string) trick)                                          
// ||DONE get compiling again -- port to STBEasyFontResult, brining travel into that function
// ||DONE public facing API should just be vprintf returning STBEasyFontResult (helper functions like draw_segs are fine)
// ||DONE fix emscripten_set_main_loop bug
// ||DONE restore test_run_tests and check
// ||DONE make a less exciting test_eso that doesn't require transforms, etc. (just draw the primitives yo)
// ||TODO rename POE_WASM to POE_WASM
...</pre>
</article><br>
