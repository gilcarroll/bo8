OVERVIEW



MODULES
custom
~ energysci-contains site custom functionality, including
	~ A block for news archives years.
	~ code to rewrite an incoming URL from the news menu item.
contrib
~ admin - Provides the wrench menu.
~ Backup and Migrate
~ Bean - Turns blocks into entities.
~ Conditional Fields
~ Chaos Tools
~ Coder - Module to test syntax of custom code.
~ Crazy Egg - NREL standard
~ Date
~ Date API
~ Date Popup
~ Date Views - Used for passing date granularity values. (e.g. 'articles by year' view).
~ Devel - DISABLE ON PROD
~ Devel Themer
~ Diff - Provides revision diffs
~ Email
~ Entity - Required by OG.
~ Entity API - Required by several modules.
~ Entity Tokens - Required for rules UI.
~ Entity View Modes - Allows us to create custom view modes.
~ Features - Central to NREL projects. Imports configurations into code.
~ Feed_importer - Used for cron imports for events/news.
~ Feeds - For importing nodes [unused].
~ Field Collection - [removed]
~ Field group
~ Job Scheduler
~ LDAP - NREL standard [removed]
~ Lightbox2 - [removed]
~ link
~ Linkit - to link in TinyMCE to internal site pages.
~ Location - unused but available.
~ Media - required for workbench.
~ Module Filter - organizes the list of modules.
~ NREL Ldap - An NREL custom module.
~ Organic Groups - Suite of modules establishing groups. [removed]
~ Panels
~ Page Manager - required by Panels.
~ Pathauto
~ Pathologic - Fixes broken url paths, such as local vs prod.
~ Phone number
~ PHP Filter - In core but enabled.
~ Print - [removed]
~ Profile2 - [removed]
~ Revisioning - [Removed conflicts/redundant with Workbench.]
~ Rules
~ Strongarm
~ Token
~ Views PHP - allows one to create a view field using PHP. Used to create a TID field.
~ Workbench - Suite of modules controlling workflow.
~ Wysiwyg - For TinyMCE editor.


THEMES
~ energyscitheme
~ nreltheme
~ seven theme (for now)


User profiles and workbench
There was an issue integrating the user profile into the workbench module, since a user profile is not a node and the workbench module only works on nodes.
We used a solution at http://jacobmumm.com/2011/12/21/drupal-workbench-user-profiles/